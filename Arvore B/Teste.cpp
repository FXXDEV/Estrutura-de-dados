#include <stdio.h>
#include <stdlib.h>
#include <String.h>
#include <locale.h>

int exec=0;
int execE=0;
int execD=0;


typedef struct ar{
	struct ar *pp;
	struct ar *aa;
	struct ar *raiz;
	int valor;
}b;

void inicia(b ** null){//inicializar a lista, definindo valores nulos
	*null= NULL;
}


int insereRaiz(b **bb,int val){
	ar *aux = (ar *)malloc(sizeof(ar));
	aux->valor = val;
	aux->aa = aux;
	aux->pp= aux;
	aux->raiz = aux;
	*bb=aux;
	exec++;
	printf("\nRaiz definida com sucesso!\n\n",val);	
	system("pause");
	system("cls");		
}
	
int insereEsquerda(b **bb,int val){
	ar *aux = (ar *)malloc(sizeof(ar));
	
	if(execE==0){
		aux->valor = val;
		aux->aa = aux;
		aux->pp = aux;
		(*bb)->aa = aux;
		execE++;
	}else{
		aux->valor = val;
		aux->pp = (*bb)->aa->pp;
		aux->aa = (*bb)->aa;
		(*bb)->aa->pp = aux;
		aux->pp->aa = aux;
		(*bb)->aa = aux;
		execE++;
	}
	
	printf("\nValor %i inserido com sucesso a esquerda da raiz\n",val);
	system("pause");
	system("cls");
}

int insereDireita(b **bb,int val){
	ar *aux = (ar *)malloc(sizeof(ar));
	
	if(execD==0){
		aux->valor = val;
		aux->aa = aux;
		aux->pp = aux;
		(*bb)->pp = aux;
		execD++;
	}else{
		aux->valor = val;
		aux->pp = (*bb)->pp->pp;
		aux->aa = (*bb)->pp;
		(*bb)->pp->pp = aux;
		aux->pp->aa = aux;
		(*bb)->pp = aux;
		execD++;
	}
	
	printf("\nValor %i inserido com sucesso a direita da raiz\n",val);
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


int main(){
	
	setlocale(LC_ALL,"Portuguese");
	b *bb;
	int op;
	int val;
	inicia(&bb);
	printf("Estrutura de Dados - Árvore B\n");
	
	for(;;){
		printf("\n1 - Inserir\n2 - Remover\n3 - Exibir\n4 - Anterior\n5 - Próximo\n6 - Cima\n7 - Sair\n\n");
		if(exec==0){
			printf("Árvore vazia!\nOpção:");
		}else{
			printf("Raiz:%i\n",bb->raiz->valor);
			printf("Valor atual:%i\n",bb->valor);
			printf("Opção:");
		}
		
		scanf("%i",&op);
			
		if(op==1){
			printf("Digite o valor a ser inserido:");
			scanf("%i",&val);
						
			if(exec==0){
				insereRaiz(&bb,val);
			}else{
				if(val>(bb->raiz->valor)){
					insereDireita(&bb,val);
				}else if(val<(bb->raiz->valor)){
					insereEsquerda(&bb,val);
				}else{
					printf("\nO valor inserido deve ser diferente da raiz!\n\n");
					system("pause");
					system("cls");
				}
			}
		
			
		}
		
		if(op==2){
			remover();
		}
		
		if(op==3){
			listar();
		}
		
		if(op==4){
			bb = bb->aa; 
			printf("Valor anterior:%i\n",bb->valor); // Lista o valor anterior da lista
			system("pause");
		}
		
		if(op==5){
			bb = bb->pp; 
			printf("Próximo valor:%i\n",bb->valor); // Lista o proximo valor da lista
			system("pause");
		}
		if(op==6){
			bb = bb->raiz; 
			printf("Próximo valor:%i\n",bb->valor); // Lista o proximo valor da lista
			system("pause");
		}
		if(op==7){
			exit(1);
		}
	}
}
