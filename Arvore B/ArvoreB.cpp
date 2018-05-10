#include <stdio.h>
#include <stdlib.h>
#include <String.h>
#include <locale.h>


typedef struct ar{
	struct ar *pp;
	struct ar *aa;
	struct ar *pc;
	int valor;
}b;

void inicia(b ** bb){//inicializar a lista, definindo valores nulos
	*bb= NULL;
}

int insere(){
	int val;
	printf("Digite o valor a ser inserido");
	scanf("%i",&val);
	
	
	
}

void remover(){
	
}


void listar(){
	
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	b *bb;
	int op;
	int val;
	inicia(&bb);
	printf("Estrutura de Dados - Árvore B\n");
	
	for(;;){
		printf("\n1 - Inserir\n2 - Remover\n3 - Exibir\n4 - Anterior\n5 - Próximo\n6 - Cima\n7 - Sair\n\nOpção:");
		scanf("%i",&op);
		printf("Valor atual:%i");
		if(op==1){
			insere();
		}
		
		if(op==2){
			remover();
		}
		
		if(op==3){
			listar();
		}
		
		if(op==4){
			
		}
		
		if(op==5){
			
		}
		if(op==6){
			
		}
		if(op==7){
			exit(1);
		}
	}
}
