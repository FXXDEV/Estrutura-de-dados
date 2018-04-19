#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int exec=0;
struct lista
{
	int valor;
	struct lista *aa;
	struct lista *pp;
};

struct lista *inicia(){
	return NULL;
}

int main();

struct lista *finalera;
struct lista *buscar(struct lista *list, int val) {
	struct lista *voltar; 
	
	int encontrado = 0; 
	voltar = NULL; 
	while(1<2){
		if((list->valor) != val) {
			list = list->pp; 
			
		}else if((list->valor) == val){ 
			voltar = list; 
			encontrado = 1;
			break;
		}
		
		}
		
	
	if(encontrado == 1) {
		printf("Valor encontrado!\n");
		int *imprime;
		int *anterior,*antF;
		int *proximo,*proxF;
		struct lista *prox;
		struct lista *ant;
		prox = voltar;
		ant = voltar;
	
		imprime= &voltar->valor;
		proximo= &prox->pp->valor;
	//	proxF=proximo;
		anterior= &ant->aa->valor;
	//	antF=anterior;
	
		printf("\nValor anterior:%i   |   ",*anterior);
		printf("Valor:%i   |   ",*imprime);
		printf("Valor próximo:%i\n",*proximo);
	}else{
		printf("Valor inválido\n");
	}
	return voltar;

}

void  *listar(struct lista *list){
	if(list==NULL){
		printf("Lista vazia, insira alguns valores\n");
		system("pause");
		main();
	}else{
		printf("Lista ordenada\n");
		struct lista *aux =list;
	
		while(aux!=NULL){
			printf("Valor:%i\n",aux->valor);
		aux = aux->pp;
	}
		
	}
	

}

struct lista *insereLista(struct lista *list,int val){
	struct lista *novo;
	struct lista *p = list,*aux =list,*inicio=list,*final=list,*teste;
	novo = (struct lista *)malloc(sizeof(struct lista));
	
	novo->valor = val;
	int j=0;
	int i=0;
	
	
	if (list == NULL){ // se a lista for vazia
		//armazena o primeiro registro se a lista for vazia
		novo->aa = NULL;
		novo->pp = NULL;
		list = novo;
		
	}else{
		while(p != NULL){//
			
			if(p->valor <= val){//valor da lista serem menor que o VAl passsado pelo usuário
				aux = p; // ultimo registro vai passar para o p
				j++;	// quantas vezes ele entrou na verificacao
			}
			
			p = p->pp;
			i++; // se o j entrou menos que o i o número esta entre os dois valores, proximo, anterior, e atual
		}
		if(j == 0){ // primeiro da lista e menor do que todos, pois o j nao incrementou 

			novo->aa = NULL;
			list->aa = novo;
			novo->pp = list;
			list = novo;
			inicio = list;
			teste = inicio;
			
			
		}else if(j<i){//valor no meio da lista, pois o i só incrimenta na prox, maior que o anterior, menor que o proximo
			aux->pp->aa = novo;
			novo->pp = aux->pp;
			novo->aa = aux;
			aux->pp = novo;
		
			
		}else if (i==j){// insere no final da lista
			aux->pp = novo;
			novo->aa = aux;
			inicio->aa = aux->pp;
			novo->pp=inicio;
			
			
			
			
		}
	
	}
	
	return list;
}

void remover(struct lista **list, int val){
	struct lista *aux1,*aux2;
	int encontrado = 0;
	aux1 = *list; 
	
	if(*list == NULL)	{
		printf("\nLista Vazia\n");
		system("pause");
		main();
	}
	else{
		
		printf("\nValor a Ser Removido: ");
		scanf("%d",&val);
		aux2 = buscar(*list, val);
		
		if(aux2 != NULL) 	{
			if(aux2->pp != NULL) 	{
				aux2->pp->aa = aux2->aa; 
			}	if(aux2->aa != NULL) {
				aux2->aa->pp = aux2->pp; 
			}
			else	{
				*list = aux2->pp;
			}
			free(aux2);
			encontrado = 1;
		}
		
		if(encontrado == 1){
			printf("\nElemento removido com Sucesso!\n");
		}else	{
			printf("\nElemento nao Encontrado\n");
		}
	}
	system("pause")	;
	main();
}


int main(){
	setlocale(LC_ALL,"Portuguese");
	system("cls");
	int val;
	int op=0;

	
	struct lista *list = inicia();
	struct lista *final;

	printf("Lista duplamente encadeada ordenada");
	printf("\n1 - Inserir\n2 - Remover\n3 - Listar\n4 - Playlist \n5 - Sair\n\n");
	scanf("%i",&op);

	
		if(op==1){
			
			printf("Digite um valor para ser inserido na lista(0 para cancelar):");
			scanf("%i",&val);
		
			finalera = insereLista(finalera,val);
			
				
			exec++;
			system("pause");
			main();
			//listar(list);	
			
			}
		
		
		
		
		
		if(op==2){
			remover(&finalera,val);
		}
		
		if(op==3){
			listar(finalera);
			system("pause");
			main();
		}
		
		
		if(op==4){
			printf("Digite um valor a ser buscado:");
			scanf("%i",&val);
			buscar(finalera, val);
			system("pause");
			main();
		}
		
		
		if (op==5){
			printf("Finalizando...\n");
			system("pause");
		}
//	main();
	


}

	

	

