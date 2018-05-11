#include <stdio.h>
#include <stdlib.h>
#include <String.h>
#include <locale.h>

int execG=0;
int execE=0;
int execD=0;

typedef struct ar{
	struct ar *pp;
	struct ar *aa;
	struct ar *pc;
	int valor;
}b;

/*b *bD;// direita da raiz
b *bE;// esquerda da raiz
b *raiz; //raiz*/


void inicia(b ** null){//inicializar a lista, definindo valores nulos
	*null= NULL;
}




int insere(b **bb,int val){
	b * bD;
	b * raiz;
	b * bE;
	
	if(execG==0){//primeira execução e definição de RAIZ
		ar * raiz = (ar *)malloc(sizeof(ar));
		raiz->valor = val;
		raiz->pp = bD;
		raiz->aa = bE;
		printf("Raiz definida com sucesso!\n");
		execG++;
	}else if(execG>0){
		if(val< 50){//valores a serem inseridos a esquerda
			if(execE==0){
				ar *bE = (ar *)malloc(sizeof(ar));
				bE->valor = val;
				bE->aa = bE;
				bE->pp= bE;	
				*bb = bE;
				printf("\nValor %i inserido com sucesso a direita da raiz!\n\n",val);
				system("pause");	
				execE++;
			}else{
				ar * bE = (ar *)malloc(sizeof(ar));
				bE->valor = val;
				bE->pp = (*bb)->pp;
				bE->aa = *bb;
				(*bb)->pp = bE;
				bE->pp->aa = bE;
				*bb = bE;
				printf("\nValor %i inserido com sucesso a esquerda da raiz!\n\n",val);
			}
			
			
		}else if(val>50){//valores a serem inseridos a esquerda	
			if(execD==0){
				ar *bD = (ar *)malloc(sizeof(ar));
				bD->valor = val;
				bD->aa = bD;
				bD->pp= bD;	
				*bb = bD;
				printf("\nValor %i inserido com sucesso a direita da raiz!\n\n",val);
				system("pause");	
				execD++;
			}else{
				ar * bD = (ar *)malloc(sizeof(ar));
				bD->valor = val;
				bD->pp = (*bb)->pp;
				bD->aa = *bb;
				(*bb)->pp = bD;
				bD->pp->aa = bD;
				*bb = bD;
				printf("\nValor %i inserido com sucesso a direita da raiz!\n\n",val);
			}
			
			
		}
	}
	
	system("pause");
	system("cls");
	
}

void remover(){
	
}


void listar(){
	printf("\nError 404, página não encontrada!\n");
	system("pause");
	system("cls");
}

void impressaoTXT(){
	
}

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	b *bb;

	int op;
	int val;
	inicia(&bb);
	/*inicia(&bD);
	inicia(&bE);
	inicia(&raiz);*/
	printf("Estrutura de Dados - Árvore B\n");

	for(;;){
		printf("\n1 - Inserir\n2 - Remover\n3 - Exibir\n4 - Anterior\n5 - Próximo\n6 - Cima\n7 - Sair\n\nOpção:");
		scanf("%i",&op);
		if(execG==0){
			printf("Árvore vazia!\n");
		}else{
			printf("Valor atual:%i\n",val);
		}
		
		if(op==1){
			printf("Digite o valor a ser inserido:");
			scanf("%i",&val);
			insere(&bb,val);	
			
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
