#include <stdio.h>
#include <stdlib.h>
#include <String.h>
#include <locale.h>

typedef struct lista{
	int valor;
	struct lista *aa;
	struct lista *pp;
}list;

int main();
int exec=0;

void inicia(list ** lis){//ok
	*lis= NULL;
}

void listar(list **lis){//??
	if(exec==0){
		printf("Lista vazia, insira alguns valores\n");
		system("pause");
		main();
	}else{
		printf("Lista dos números inseridos\n");
		list *aux =*lis;
	
	
	for(int y=0;y<exec;y++){
			printf("Valor:%i\n",aux->valor);
			aux = aux->pp;
		}
		system("pause");
	}

}

int insereP(list **lis,int val){
	
	lista *aux = (lista *)malloc(sizeof(lista));
	aux->valor = val;
	aux->aa = aux;
	aux->pp= aux;	
	*lis = aux;
	exec++;
	printf("\nValor %i inserido com sucesso!\n\n",val);
	system("pause");	

}

int insere(list **lis,int val){
	
	lista *aux = (lista *)malloc(sizeof(lista));
	aux->valor = val;
	aux->pp = (*lis)->pp;
	aux->aa = *lis;
	(*lis)->pp = aux;
	aux->pp->aa = aux;
	*lis = aux;
	printf("\nValor %i inserido com sucesso!\n\n",val);
	exec++;
	system("pause");
}

void remove(list **lis){
		lista *rev;
		if(exec==0){
		printf("A lista esta nula, por favor insira alguns valores!\n");
				
		}else{

		(*lis)->pp->aa = (*lis)->aa;
		(*lis)->aa->pp = (*lis)->pp;
		rev = (*lis)->pp;
		printf("Valor removido:%i\n",rev->valor);
		free(*lis);
		*lis = rev;
		exec--;
	}
	system("pause");
	
}

int main(){
	list *lis;
	inicia(&lis);
	int op=0,val=0;
	
	setlocale(LC_ALL,"Portuguese");
	
	for(;;){
		system("cls");
		
		if(exec==0){
			printf("LISTA DUPLAMENTE ENCADEADA - Estrutura de Dados\n");
			printf("\n1 - Inserir\n2 - Remover\n3 - Listar\n4 - Proximo \n5 - Anterior\n6 - Sair\n\nValor atual: Vazio\n\nOpção:");
			scanf("%i",&op);
		}else{
			printf("LISTA DUPLAMENTE ENCADEADA - Estrutura de Dados\n");
			printf("\n1 - Inserir\n2 - Remover\n3 - Listar\n4 - Proximo \n5 - Anterior\n6 - Sair\n\nValor atual: %i\n\nOpção:",lis->valor);
			scanf("%i",&op);
		}
		
		
		if(op==1){
			if(exec==0){
				printf("Digite o valor a ser inserido:");
				scanf("%i",&val);
				insereP(&lis,val);
			}else{
				printf("Digite o valor a ser inserido:");
				scanf("%i",&val);
				insere(&lis,val);
			}
		}
		
		if(op==2){
			remove(&lis);			
		}
		
		if(op==3){
			listar(&lis);
		}
		
		if(op==4){
			lis = lis->pp; 
			printf("Valor:%i\n",lis->valor); 
			system("pause");	
		}
		
		if(op==5){
			lis = lis->aa; 
			printf("Valor:%i\n",lis->valor); 
			system("pause");
		
		}
		
		if(op==6){
			system("cls");
			printf("\nAté logo\n");
			exit(1);
		}
	
	}
	
}
