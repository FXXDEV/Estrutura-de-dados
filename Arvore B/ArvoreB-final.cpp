#include <stdio.h>
#include <stdlib.h>
#include <String.h>
#include <locale.h>

int exec=0;
int execE=0;
int execD=0;


struct ar{
	struct ar *pp;
	struct ar *aa;
	struct ar *anterior;
	int valor;
};

int valGeral;

void inicia(b ** null){//inicializar a lista, definindo valores nulos
	*null= NULL;
}



void inserir(struct ar **list){

	struct ar *vet;
	
	if(*list == NULL){
		
	struct ar *aux;
	printf("\n\nInsira o valor na lista\n");
	scanf("%d",&valGeral);
		if((aux =(struct ar * ) malloc(sizeof(struct ar))) == NULL)/
		{
			printf("\nErro no malloc");
		}else{
			
			aux->valor = valGeral;
			aux->pp=NULL;
			aux->aa = NULL;
			aux->anterior = NULL;
			*list=aux;
		}
	}else{
		struct ar *aux, *nav; 
		
	
		printf("\n\nDigite o valor para se inserido apos o elemento\n");
		scanf("%d",&valor);
		
		nav = *list;
		
		
		if((aux = (struct ar * ) malloc(sizeof(struct ar))) == NULL){
			printf("\nErro no malloc");
		}
		
		else{
			
			aux->valor = valGeral; 
			
			if(nav->valor->aux->valor){
				if(nav->aa==NULL){
	
						vet=nav;
						aux->anterior=vet;
						aux->aa=NULL;
						aux->pp=NULL;
						nav->aa=aux;
						
						
				}else{
					while(nav->valor<aux->valor){
						nav=nav->aa;
					}
					nav=nav->aa;
					if(nav->valor<aux->nav){
						
						vet=nav;
						aux->cima=vt;
						aux->aa=NULL;
						aux->pp=NULL;
						nav->pp=aux;
						
					}else{
						vet=nav;
						aux->anterior=vt;
						aux->aa=NULL;
						aux->pp=NULL;
						nav->aa=p;
						
					}
				}
				
			}else if(nav->valor<aux->valor){
				//passagem at� o ultimo valor que � maior
				if(nav->pp==NULL){
						vet=nav;
						aux->anterior=vet;
						aux->aa=NULL;
						aux->pp=NULL;
						nav->pp=aux;
						
						
				}else{
					while(pNavegar->numero<p->numero && pNavegar->direita!=NULL){
						pNavegar=pNavegar->direita;
					}
					
					if(pNavegar->numero<p->numero){
						vt=pNavegar;
						p->cima=vt;
						p->esquerda=NULL;
						p->direita=NULL;
						pNavegar->direita=p;
						
					}else{
						vt=pNavegar;
						p->cima=vt;
						p->esquerda=NULL;
						p->direita=NULL;
						pNavegar->esquerda=p;
					}
				}

			
			}
			
			
			*lista=pNavegar;
			
		}
	}
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

void removeD(b **bb){
	ar *r; //remocao
	r = (*bb)->pp;
	(*bb)->pp->aa = (*bb)->aa;
	(*bb)->aa->pp = (*bb)->pp;
	r = (*bb)->pp;
	printf("Valor atual:%i\n",r->valor);
	free(*bb);
	*bb = r;	
	system("pause");
	system("cls");
		
	
}

void removeE(b **bb){
		ar *r;
		r = (*bb)->aa;
		(*bb)->pp->aa = (*bb)->aa;
		(*bb)->aa->pp = (*bb)->pp;
		r = (*bb)->pp;
		printf("Valor atual:%i\n",r->valor);
		free(*bb);
		*bb = r;
		system("pause");
		system("cls");
	
}

void removeR(b **bb){
	b *temp = (*bb)->raiz;
}


void listar(b **bb){
	b *aux1 = (*bb)->aa;//aux anterior
	b *aux2 = (*bb)->pp;//aux proximo
	
	printf("         [%i]\n",(*bb)->raiz->valor);
	
	for(int i=0; i<execE;i++){
		//aux1 = 
		printf("[%i]",(aux1)->valor);
		aux1 = aux1->aa;
	}
	printf("     |   ")	;
	for(int j=0; j<execD;j++){
		printf("[%i]",(aux2)->valor);
		aux2 = aux2->pp;
		
	}
	

	
	printf("\nError 404, página não encontrada!\n");
	system("pause");
	system("cls");
}


int main(){
	
	setlocale(LC_ALL,"Portuguese");
	b *bb;
	b *raiz;
	int dirC=0;
	int esqC=0;
	int op=0;
	int val;
	int nav;

	inicia(&bb);
	
	printf("Estrutura de Dados - Árvore B\n");
	
	for(;;){
		printf("\n1 - Inserir\n2 - Remover\n3 - Exibir\n4 - Anterior\n5 - Próximo\n6 - Cima\n7 - Sair\n\n");
		if(exec==0){
			printf("Árvore vazia!\nOpção:");
		}else{
			printf("Raiz:%i\n",bb->raiz->valor);
			printf("Valor atual:%i\n",nav);
			printf("Opção:");
		}
		
		scanf("%i",&op);
			
		if(op==1){
			
			printf("Digite o valor a ser inserido:");
			scanf("%i",&val);
						
			if(exec==0){
				insereRaiz(&bb,val);
				raiz = bb;
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
			if(exec==0){
				printf("Árvore vazia");	
			}else{
				if((bb)->valor > ((bb)->raiz->valor)){
					if(execD==1){
						free(bb);
						raiz->pp = raiz;
						bb=raiz;
						
						
					}else{
					removeD(&bb);
					}
					nav = raiz->valor;
					execD--;
				}else if((bb)->valor < ((bb)->raiz->valor)){
					if(execE==1){
						free(bb);
						raiz->aa = raiz;
						bb=raiz;
						
					}else{
						removeE(&bb);
					}
					nav = raiz->valor;
					execE--;
					
				}else if((bb)->valor == ((bb)->raiz->valor)){
					printf("Isso aí da merda serjão\n");
					
					//removeR(&bb);
				}
				
			}	
			system("pause");
			system("cls");
			}
		
		
		if(op==3){
			if(exec==0){
				printf("Árvore vazia");	
			}else{
				listar(&bb);
			}
			
		}
		
		if(op==4){
			if(exec==0){
				printf("Árvore vazia");	
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
				printf("Árvore vazia");	
			}else{
				if((esqC==0) && (dirC ==0)){
					bb = bb->pp;
					nav = bb->valor;
					dirC++;	
				}else{
					bb = bb->pp;
					nav= bb->valor;
				}
				printf("Próximo valor:%i\n",nav); // Lista o proximo valor da lista
				system("pause");
				system("cls");
			}
			
		}
		if(op==6){
	
			if(exec==0){
				printf("Árvore vazia");
			}else{
				bb = bb->raiz; 
				nav = bb->valor;
				esqC = 0;
				dirC = 0;
			}
			printf("Valor acima:%i\n",nav); // Lista a raiz
			system("pause");
			system("cls");
			
		}
		if(op==7){
			exit(1);
		}
		}
}

