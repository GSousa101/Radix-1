#include "main.h"

//função apenas cria uma nova unidade, dando a posição x e y. inicializa os recursos pra 0
t_unidade	*nova_unidade(int x, int y)
{
	t_unidade	*unidade;

	unidade = malloc(sizeof(t_unidade));
	unidade->pos_x = x;
	unidade->pos_y = y;
	unidade->recursos.agua = 0;
	unidade->recursos.comida = 0;
	unidade->recursos.quimicos = 0;
	unidade->recursos.ferramentas = 0;
	unidade->next = NULL;
	return (unidade);
}
