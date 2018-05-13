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
	aux->raiz->valor = val;
	*bb=aux;
	exec++;
	printf("\nRaiz definida com sucesso!\n\n",val);	
	system("pause");
	system("cls");		
}
	
int insereEsquerda(b **bb,int val){
	ar *aux = (ar *)malloc(sizeof(ar));
	b *temp = (*bb)->raiz;
	if(execE==0){
		aux->valor = val;
		aux->aa = aux;
		aux->pp = aux;
		aux->raiz = temp;
		(*bb)->aa = aux;
		execE++;
	}else{
		aux->valor = val;
		aux->raiz = aux;
		aux->pp = (*bb)->aa->pp;
		aux->aa = (*bb)->aa;
		(*bb)->aa->pp = aux;
		aux->raiz = temp;
		(*bb)->aa = aux;
		execE++;
	}
	
	printf("\nValor %i inserido com sucesso a esquerda da raiz\n",val);
	system("pause");
	system("cls");
}

int insereDireita(b **bb,int val){
	ar *aux = (ar *)malloc(sizeof(ar));
	b *temp = (*bb)->raiz;
	if(execD==0){
		aux->valor = val;
		aux->aa = aux;
		aux->pp = aux;
		aux->raiz = temp;
		(*bb)->pp = aux;
		execD++;
	}else{
		aux->valor = val;
		aux->pp = (*bb)->pp->pp;
		aux->aa = (*bb)->pp;
		(*bb)->pp->pp = aux;
		aux->raiz = temp;
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
	printf("\nError 404, p�gina n�o encontrada!\n");
	system("pause");
	system("cls");
}


int main(){
	
	setlocale(LC_ALL,"Portuguese");
	b *bb;
	b *raiz;
	b *esq; 
	b *dir;
	
	int dirC=0;
	int esqC=0;
	int op=0;
	int val;
	int nav;

	inicia(&bb);
	
	printf("Estrutura de Dados - �rvore B\n");
	
	for(;;){
		printf("\n1 - Inserir\n2 - Remover\n3 - Exibir\n4 - Anterior\n5 - Pr�ximo\n6 - Cima\n7 - Sair\n\n");
		if(exec==0){
			printf("�rvore vazia!\nOp��o:");
		}else{
			printf("Raiz:%i\n",bb->raiz->valor);
			printf("Valor atual:%i\n",nav);
			printf("Op��o:");
		}
		
		scanf("%i",&op);
			
		if(op==1){
			
			printf("Digite o valor a ser inserido:");
			scanf("%i",&val);
						
			if(exec==0){
				insereRaiz(&bb,val);
				nav = bb->valor;
			}else{
				bb = bb->raiz;
				if(val>(bb->raiz->valor)){
					insereDireita(&bb,val);
					nav = bb->raiz->valor;
				}else if(val<(bb->raiz->valor)){
					insereEsquerda(&bb,val);
					nav = bb->raiz->valor;
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
			if(exec==0){
				printf("�rvore vazia");	
			}else{
				if((esqC==0) && (dirC ==0)){
					bb = bb->aa;
					nav = bb->valor;
					esqC++;	
				}else {
					bb = bb->aa;
					nav = bb->valor;
					
				}
				printf("Valor anterior:%i\n",nav); // Lista o valor anterior da lista
				system("pause");
				system("cls");
			}
		}
		
		if(op==5){
			if(exec==0){
				printf("�rvore vazia");	
			}else{
				if((esqC==0) && (dirC ==0)){
					bb = bb->pp;
					nav = bb->valor;
					dirC++;	
				}else{
					bb = bb->pp;
					nav= bb->valor;
				}
				printf("Pr�ximo valor:%i\n",nav); // Lista o proximo valor da lista
				system("pause");
				system("cls");
			}
			
		}
		if(op==6){
	
			if(exec==0){
				printf("Arvore vazia");
			}else{
				bb = bb->raiz; 
				nav = bb->valor;
				printf("Valor acima:%i\n",nav); // Lista a raiz
				system("pause");
				system("cls");
				esqC = 0;
				dirC = 0;
			}
			
		}
		if(op==7){
			exit(1);
		}
	}
}