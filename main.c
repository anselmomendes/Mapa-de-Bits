/*
Marab�, 21 de Setembro de 2017
UNIFESSPA - Universidade Federal do Sul e Sudeste do Par�;
Engenharia da Computa��o 2015;
Implementa��o da estrutura mapa de bits ;
Discentes:
	Anselmo Mendes Oliveira
	Fernando Freire
	Leoni Martins
	
-Esse codigo simula o algoritimo um mapa de bits, ele cont�m 3 op��es que simula a utiliza��o da memoria.
-� possivel exibir, inserir e simular processos.
-Quando usamos a fun��o "exibir mem�ria" podemos ver as posi��es da memoria que est�o vazias ou ocupadas.
-Quando iniciamos o programa a memoria esta completamente vazia, � possivel alocar um porcesso na mem�ria
seguindo o algoritimo de "Melhor ajuste".
-Temos a 3� op��o que simula a utiliza��o da mem�ria.
-Quando vamos inserir processos quando definimos o tamanho ela retorna se consiguiu alocar.
*/

#include "matrizBits.h"

int main(){
	setlocale(LC_ALL, "portuguese");
	Arquivo A[TAMANHO];
	zeraMatriz(A);
	menu(A);
	return 0;
}
