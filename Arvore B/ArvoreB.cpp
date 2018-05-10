#include <stdio.h>
#include <stdlib.h>
#include <String.h>
#include <locale.h>

int exec=0;

typedef struct ar{
	struct ar *pp;
	struct ar *aa;
	struct ar *pc;
	int valor;
}b;



void inicia(b ** bb){//inicializar a lista, definindo valores nulos
	*bb= NULL;
}

int insere(b **bb,int val){
	printf("Digite o valor a ser inserido");
	scanf("%i",val);
	
	
	
}

void remover(){
	
}


void listar(){
	
}

void impressaoTXT(){
	
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	b *raiz;
	b *bb;
	int op;
	int val;
	inicia(&bb);
	printf("Estrutura de Dados - Árvore B\n");
	
	for(;;){
		printf("\n1 - Inserir\n2 - Remover\n3 - Exibir\n4 - Anterior\n5 - Próximo\n6 - Cima\n7 - Sair\n\nOpção:");
		scanf("%i",&op);
		printf("Valor atual:%i",val);
		if(op==1){
			if(exec==0){
				insere(&raiz,val);
			}else{
				insere(&bb,val);
			}
			
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
