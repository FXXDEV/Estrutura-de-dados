#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<locale.h>
#include <stddef.h>
#define MAX 5

int contador = 0;
int ent=0;
int entI=0;
int saida=0;
int contI=0;
int contadorN=0;
int entGeral;

struct pessoa{
	char nome[20];
	int idade;
	
};

struct pessoa p[MAX];
struct pessoa idoso[MAX];

void insert();
void show();
void remove();




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
       
       
       if(contador<MAX && ent==MAX){
	       		ent=0;
	       		entI=0;
	       	if(idade>=60){
	       		strcpy(	idoso[entI].nome, nome);
				idoso[entI].idade = idade;
				entI++;
				contador++;
				contI++;
				printf("Pessoa idosa inserida com sucesso");
			}else if(idade<60){
				strcpy(	p[ent].nome, nome);
				p[ent].idade = idade;
				ent++;
				contador++;
				contadorN++;
				printf("Pessoa inserida com sucesso");
			}
		}else if(contador<MAX ){
			//	ent=0;
				if(idade>=60){
					strcpy(	idoso[entI].nome, nome);
					idoso[entI].idade = idade;
					//ent++;
					entI++;
					contador++;
					contI++;
					printf("Pessoa idosa inserida com sucesso");
				}else if(idade<60){
					strcpy(	p[ent].nome, nome);
					p[ent].idade = idade;
					ent++;
					contador++;
					contadorN++;
					printf("Pessoa inserida com sucesso ");
				}
			}
	
	
}

void show(){

	int opt;
	
	printf("Qual opção você deseja?\n");
	printf("1 - Listar todos\n");
	printf("2 - Listar idosos por ordem de chegada\n");
	printf("3 - Listar pessoas abaixo de 70 anos por ordem de chegada\n");
	printf("4 - Voltar para o menu\n");
	scanf("%i",&opt);

	


	if(opt==1)	{
		
		if(contI!=0){
			for (int i=0;i<MAX ;i++){
			if(idoso[i].idade!=0 && idoso[i].nome!=0){
				printf("Nome:%s\nIdade:%i\n\n",idoso[i].nome,idoso[i].idade);	
			}
			
		
    		}
    	}
    	
    	if(contadorN!=0){
    		for (int i=0;i<MAX ;i++){
    			
			if(p[i].idade!=0 && p[i].nome!=0){
				printf("Nome:%s\nIdade:%i\n\n",p[i].nome,p[i].idade);
			}	
				
			
			}	
    		
		}
		
		system("pause")	;
	}

	if(opt==4){
		system("cls");
		main();
	}
	

	
}


void remove(){
	int saidaI=0;//saida idoso
	int saidaN=0;//saida normal
	
	if(contI!=0){
		if(saidaI==MAX && contI>0){
			saidaI=0;
			idoso[saidaI].idade= 0;
			strcpy(idoso[saidaI].nome,0);
			saidaI++;
			contI--;
			contador--;
			
		}else if(saidaI<MAX){
			idoso[saidaI].idade= 0;
			strcpy(idoso[saidaI].nome,"\0");
			//idoso[saidaI].nome= NULL;	
			saidaI++;
			contI--;
			contador--;
		}
		
	}else if (contadorN!=0){
		if(saidaN==MAX && contador>0){
			saidaN=0;
			p[saidaN].idade= 0;
			strcpy(p[saidaN].nome,"\0");
			//p[saidaI].nome= NULL;
			saidaN++;
			contadorN--;
			contador--;
		}else if(saidaN<MAX){
			p[saidaN].idade= 0;
			strcpy(p[saidaN].nome,"\0");
	//		p[saidaN].nome= NULL;	
			saidaN++;
			contadorN--;
			contador--;
		}
		
		
	}
	

	
	main();
	
}


