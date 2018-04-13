#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<locale.h>
#define MAX 5

int fila[MAX];
int saida=0;
int entrada=0;
int ent=0;
int contador=0;




/*	int verifica() {
	
	for(final =0; final<entrada;final++){
		if(fila[final]== NULL ){
			
			*pos= fila[final];
			 ent = *pos;
			 
			
		}
	}
}*/



int insert (int in){
/*	if(contador==0){
		ent=0;
		fila[ent]=in;
		ent++;
	//	entrada++;
		contador++;*/
	 if(contador<MAX &&	ent==MAX){
		ent=0;
		fila[ent]=in;
		ent++;
		//entrada++;
		contador++;
		return 1;
		printf("Numero inserido com sucesso cont<max&&ent==max");
		
	}else if(contador < MAX){
		fila[ent]=in;
		ent++;
		//entrada++;
		contador++;
		return 1;
		printf("Numero inserido com sucesso <5");
	}/*else if(contador==0){
		ent=0;
		fila[ent]=in;
		contador++;
		return 1;
	}*/

	//verifica();
	
		
	printf("Numero inserido com sucesso");
	
//	if(contador==MAX & contador!=MAX & contador!=0){
		
	/*}else {
		verifica();
		fila[ent]=in;
    	ent++;
    	posL++;
	    entrada++;
	    contador++;
    	printf("Numero inserido com sucesso");
		
	}*/
	
	
  

}




int remove(){
	if(saida==MAX && contador > 0){
		saida=0;
		fila[saida] = NULL;
		saida++;
		contador--;
	}else if(saida<MAX){
		fila[saida] = NULL;
		saida++;
		contador--;
		//	ent--;
		
/*	}else if(saida==MAX && entrada==MAX){
		fila[saida]=NULL;
		contador=0;
		entrada=0;
		contador=0;
		saida=0;
		
	}*/
}

	
}


int show(){
    for (int i=0;i<MAX ;i++){
       printf("[%i]",fila[i]);

    }


}

int main(){

    setlocale(LC_ALL,"Portuguese");

    int nEntry;
    int opt=0;

    printf("Exercício estrutura de dados : FILA\n\n");

    for(;;){

       printf("\n\n Navegue entre as opções \n\n");
       printf("\n\n 1 - Insert \n 2 - Remove \n 3 - Show \n\n ") ;
       scanf("%i",&opt);
      // system("cls");


    if(opt==1){
    if(contador==MAX){
       	 printf("A pilha esta cheia, por favor remova alguns números");
	   }else{
       printf("Digite o valor a ser inserido:");
       scanf("%i",&nEntry);
       
	   	 insert(nEntry);
	  
         system("cls");
	   }
       

    }
	if(opt==2){
		if(contador==0){
			system("cls");
			printf("A pilha esta vazia, por favor insira alguns números");	
        	
		}else{
			system("cls");
			printf("Será removido o primeiro valor da fila: %i",fila[saida]);
        	remove();
        
			
		}
        

    }
	
	 if(opt==3){
	 	
	 	if(contador==0){
			system("cls");
			printf("A pilha esta vazia, por favor insira alguns números");	
        	
		}else{
		system("cls");
        printf("Lista dos numeros inseridos");
        show();
			
		}
	 	

    }


    }







}






