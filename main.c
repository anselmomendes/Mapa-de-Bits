/*
Marabá, 21 de Setembro de 2017
UNIFESSPA - Universidade Federal do Sul e Sudeste do Pará;
Engenharia da Computação 2015;
Implementação da estrutura mapa de bits ;
Discentes:
	Anselmo Mendes Oliveira
	Fernando Freire
	Leoni Martins
	
-Esse codigo simula o algoritimo um mapa de bits, ele contém 3 opções que simula a utilização da memoria.
-É possivel exibir, inserir e simular processos.
-Quando usamos a função "exibir memória" podemos ver as posições da memoria que estão vazias ou ocupadas.
-Quando iniciamos o programa a memoria esta completamente vazia, é possivel alocar um porcesso na memória
seguindo o algoritimo de "Melhor ajuste".
-Temos a 3º opção que simula a utilização da memória.
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
