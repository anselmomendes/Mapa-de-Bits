#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

//#define TAMANHO 4
#define TAMANHO 9
//#define TAMANHO 16
//#define TAMANHO 25

	typedef struct arquivo{
		int ocupado;
	}Arquivo;

void zeraMatriz(Arquivo A[TAMANHO]){
	int i;
	for(i=0; i<TAMANHO; i++){
		A[i].ocupado = 0;
	}	
}

void exibeMemoria(Arquivo A[TAMANHO]){
	int i,j;
	int quad = (sqrt(TAMANHO));
	for(i=0; i<TAMANHO; i++){
		quad--;
		printf("[ %d ]  ",A[i].ocupado);
		if(quad == 0){
			quad = (sqrt(TAMANHO));
			printf("\n");
		}
	}printf("\n");
}
		
	void inserirProcesso(Arquivo A[TAMANHO]){
		int x = 0, i, j = 0, tam, inicio, sucesso = 0;
		printf("Digite o tamanho do processo: ");
		scanf("%d",&tam);
			for(i=0; i<TAMANHO; i++){
				if(A[i].ocupado == 0){
					if(x == 0){
						inicio = i;
					}
					x++;
					if(x == tam){
						sucesso = 1;
						for(j=inicio; j < (x+inicio); j++){
							A[j].ocupado = 1;
						}break;
					}
				}else{
					x = 0;
				}
			}if(sucesso == 1){
				printf("\nO processo de tamanho %d foi alocado\n\n",tam);
			}else{
				printf("\nMemória insuficiente.\n\n");
			}
		}
	
	void simula(Arquivo A[TAMANHO]){
		int i;
		srand(time(NULL));
		for(i=0; i<TAMANHO; i++){
		int k = rand() % (0 - 2);
		A[i].ocupado = k;
		}
	}
	
	void menu(Arquivo A[TAMANHO]){
		
		int algoritimo;
		do{
		printf("######################################################\nSistema de gerenciamento de memoria - mapa de bits.\n######################################################\n\n");
		printf("1 - Exibe Memoria.\n2 - Inserir Processo.\n3 - Simula.\n");
		scanf("%d",&algoritimo);
		if(algoritimo < 1 || algoritimo > 3){
			printf("Opcao invalida!!\n");
		}
	}while(algoritimo < 1 || algoritimo > 4);

	switch(algoritimo){
		case 1:
			exibeMemoria(A);
			menu(A);
			break;
		case 2:
			inserirProcesso(A);
			menu(A);
			break;
		case 3:
			simula(A);
			menu(A);
			break;
	}
}
