#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<locale.h>
#include <stddef.h>
#define MAX 5

int contador = 0;
int entI=0;
int entN=0;
int saida=0;
int contI=0;
int contadorN=0;
int entGeral;
int saidaI=0;
int saidaN=0;

struct pessoa{
	char nome[20];
	int idade;
	
};

struct pessoa p[MAX];
struct pessoa idoso[MAX];

void insert();
void show();
void remove();
///



int main(){

    setlocale(LC_ALL,"Portuguese");
    int opt=0;

    printf("Exercício de fixação estrutura de dados : FILA\n\n");

    for(;;){

       printf("\n\n Navegue entre as opções \n\n");
       printf("\n\n 1 - Inserir pessoa \n 2 - Remover pessoa \n 3 - Exibir \n 4 - Sair\n\n ") ;
       scanf("%i",&opt);
       system("cls");


    if(opt==1){
    	
    if(contador==MAX){
       	 printf("A fila está cheia");
	   }else{
	   	system("cls");
		insert();
		
	   }
       

    }
	if(opt==2){
		if(contador==0){
			system("cls");
			printf("Não há ninguém na fila");	
        	
		}else{
			system("cls");
        	remove();
        
			
		}
        

    }
	
	 if(opt==3){
	 	
	 	if(contador==0){
			system("cls");
			printf("Não há ninguém na fila");	
        	
		}else{
		system("cls");
		show();
			
		}
	 	

    }
    
    if(opt==4){
    	system("pause");
    	exit(1);
	}


    }
}



void insert (){
	
	char nome[20];
   	int idade;
   	
	printf("Digite o nome a ser inserido:");
   	scanf("%s",&nome);
    printf("\nDigite a idade de %s : ",nome);
    scanf("%i",&idade);
       
       
    
       if(idade>=60){//pessoa com idade acima ou igual a de 60 anos
       	if(contI<MAX &&	entI==MAX){
			entI=0;
			printf("Numero inserido com sucesso");
			strcpy(	idoso[entI].nome, nome);
			idoso[entI].idade = idade;
			entI++;
			contador++;
			contI++;
			printf("Pessoa idosa inserida com sucesso");
		
		}else if(contI < MAX){
			strcpy(	idoso[entI].nome, nome);
			idoso[entI].idade = idade;
			entI++;
			contador++;
			contI++;
			printf("Pessoa idosa inserida com sucesso");
	
			}
	   }else{//pessoa com idade baixo de 60 anos
	   	if(contadorN<MAX &&	entN==MAX){
			entN=0;
			strcpy(	p[entN].nome, nome);
			p[entN].idade = idade;
			entN++;
			contador++;
			contadorN++;
			printf("Pessoa idosa inserida com sucesso");
		
		}else if(contadorN < MAX){
			
			strcpy(	p[entN].nome, nome);
			p[entN].idade = idade;
			entN++;
			contador++;
			contadorN++;
			printf("Pessoa inserida com sucesso ");
	   	
	   }
          
		}
}

void show(){
	
		if(contI!=0){
			printf("Fila preferencial:\n");
			for (int i=0;i<MAX ;i++){
			if(idoso[i].idade!=0 && idoso[i].nome!=0){
				printf("Nome:%s\nIdade:%i\n\n",idoso[i].nome,idoso[i].idade);	
			}
			
		
    		}
    	}

    	if(contadorN!=0){
    		printf("Fila não-preferencial:\n");
    		for (int i=0;i<MAX ;i++){
    			
			if(p[i].idade!=0 && p[i].nome!=0){
				printf("Nome:%s\nIdade:%i\n\n",p[i].nome,p[i].idade);
			}	
				
			
			}	
    		
		}
		
		system("pause")	;
		main();

	
	

	
}


void remove(){
	
	if(contI!=0){
		if(saidaI==MAX && contI>0){
			printf("Idoso removido: %s \n\n",idoso[saidaI].nome);
			saidaI=0 ;
			idoso[saidaI].idade= 0;
			strcpy(idoso[saidaI].nome,0);
			saidaI++;
			contI--;
	
		}else if(saidaI<MAX){
			printf("Idoso removido: %s\n\n",idoso[saidaI].nome);
			idoso[saidaI].idade= 0;
			strcpy(idoso[saidaI].nome,"\0");			
			saidaI++;
			contI--;
	
		}
		
	}else if (contadorN!=0){
		if(saida==MAX &&contadorN>0){
			saidaN=0;
			printf("Pessoa removida: %s\n\n",p[saidaN].nome);
			p[saidaN].idade= 0;
			strcpy(p[saidaN].nome,"\0");
			saidaN++;
			contadorN--;
		
		}else if(saidaN<MAX){
			printf("Pessoa removida: %s\n\n",p[saidaN].nome);
			p[saidaN].idade= 0;
			strcpy(p[saidaN].nome,"\0");
			saidaN++;
			contadorN--;
			
		}
		
		
	}
	
	
	
	contador--;
	main();
	
}


