#ifndef MAIN_H
# define MAIN_H

# include <unistd.h>
# include <stdlib.h>

//"ferramentas" é abrangente e pode (deve) ser um outro struct com mais variaveis dentro
typedef struct s_recursos {
	int	agua;
	int	comida;
	int	quimicos;
	int	ferramentas;
}	t_recursos;

//pos_x, pos_y = cordenadas do objeto
//pensei em fazer com lista linkada pq é mais facil de adicionar ou remover itens
typedef struct s_navio {
	int				pos_x;
	int				pos_y;
	//recursos disponiveis
	int				capacidade; //capacidade do navio, medido em cargas > ex: o navio tem 2 cargas e espaço para mais 4
	int				combustivel; //quanto de combustivel o navio possui, deve ser checado se é possivel fazer a viagem
	struct s_navio	*next;
}	t_navio;

typedef struct s_unidade {
	int					pos_x;  
	int					pos_y;
	//recursos disponiveis
	//medido em cargas > ex: restam 1 carga de agua, 2 de comida e 1 de quimicos na unidade
	t_recursos			recursos;
	struct s_unidade	*next;
}	t_unidade;

typedef struct s_porto {
	int				pos_x;
	int				pos_y;
	//recursos disponiveis
	int				navios; //quantos navios estão na unidade para fazer a viagem
	t_recursos		recursos; //recursos que o porto pode fornecer
	struct s_porto	*next;
}	t_porto;

#endif