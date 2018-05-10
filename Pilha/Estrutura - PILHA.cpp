#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#define MAX 5


int pilha[MAX];

int ponto = 0;

int push(int valor);
void pop();
void exibir();

int main(){
	
	int i=0;
	int op;
	int val;
	
	for	(;;){
		system("cls");
		printf("PILHA - Estrutura de Dados\n");
		printf("\n1 PUSH\n2 POP\n3 EXIBIR\n4 SAIR\n");
		scanf("%i", &op);
	
			
		if(op==1)	{
			if(ponto==MAX){
				printf("Pilha cheia!\n");
			}else{
				printf("\nQual o valor deseja inserir:");
				scanf("%i", &val);
				push(val);	
			}
		
		}
		
		if(op==2){
			pop();
			
		}
		
		if(op==3){
			exibir();
		}
		
		if(op==4){
			exit(1);
		}
			
		
		}
	}


int push(int valor){

	pilha[ponto] = valor;
	ponto ++;
	printf("Valor inserido: %i\n",valor);
	system("pause");
			
		
}

void pop(){
	if(ponto <= 0){
		printf("Pilha vazia!\n");
		system("pause");
	}else{
		printf("\nValor removido: %i\n",pilha[ponto-1]);
		ponto --;
		
		system("pause");
	}

}



void exibir(){
	int i;
	printf("Valores empilhados\n");
	for(i=0;i<ponto;i++){
		if (ponto == 0){
			printf("Pilha vazia!");
		}else{
			printf("%i\n",pilha[i]);
		}
		
	}
	system("pause");
}

