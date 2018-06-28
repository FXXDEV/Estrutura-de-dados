#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#define MAX 5
int vetor[MAX];


void ordena();
int main();

int inserir(){
	
	for(int i=0;i<MAX;i++){
		printf("Valor a ser digitado:");
		scanf("%i",&vetor[i]);
	}	
	ordena();
	system("cls");
	return 0;
}

void ordena(){
	
	int aux;
	int troca=1;
 while (troca == 1)
    {
        troca = 0;        
        for (int i = 0; i <= 3; i++)
        {
            if (vetor[i] > vetor[i + 1])
            {
                troca = 1;
                aux = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = aux;
            }
        }
    }
    
}


void exibir(){
	
	printf("Imprimindo os valores inseridos em ordem\n");
    for (int i=0; i<MAX; i++){
        printf("\n Posição: %i | Número: %i",i+1,vetor[i]);
    }
    
    FILE *f;
    f = fopen("Bubble.txt","w");

	for (int j=0; j<MAX; j++){
        	fprintf(f,"\n Posicao: %d | Numero: %d",j+1,vetor[j]);
   		 }
   		 fclose(f);
  		
 
    
    
    
    
    printf("\n\n\n");
	system("pause");
	system("cls");
}


int main(){
	int op=0;
	setlocale(LC_ALL,"Portuguese");
	printf("Estrutura de Dados I - Bubble Sort\n");
	
	for(;;){
		printf("Digite a opção desejada\n\n1 - Inserir\n2 - Exibir\n3 - Sair\n\nOpção:");
		scanf("%i",&op);			
		
		
		if(op==1){
			inserir();
		}
		if(op==2){
			exibir();
		}
		
		if(op==3){
			printf("\n\nSaindo...");
			exit(1);
		}
	}
	
	
}


