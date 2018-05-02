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
	

	int i=0,op=0,x=0;
	
	for	(;;){
		system("cls");
		printf("PILHA - Estrutura de Dados\n");
		printf("\n1 PUSH\n2 POP\n3 EXIBIR\n4 SAIR\n");
		scanf("%i", &op);
	
			
		if(op==1)	{
			printf("\nQual o valor deseja inserir:");
			scanf("%i", &x);
			push(x);
	
		
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
		if(ponto==MAX){
			printf("Pilha cheia!");
		}else{
			pilha[ponto] = valor;
			ponto ++;
			printf("Valor inserido: %i\n",valor);
			Sleep(1000);	
		}	
		
}

void pop(){
	if(ponto <= 0){
		printf("Pilha vazia!\n");
	}else{
		ponto --;
		printf("\nValor removido: %i\n",pilha[ponto]);
		pilha [ponto] = NULL;
	}
	Sleep(1000);	
}

void exibir(){
	int j;
	for(j=0;j<ponto;j++){
		if (ponto == 0){
			printf("Pilha vazia!");
		}else{
			printf("%i\n",pilha[j]);
		}
		
	}
	system("pause");
}

