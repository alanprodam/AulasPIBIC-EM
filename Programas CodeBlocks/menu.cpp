#include <stdio.h>
#include <stdlib.h>

int main ()
{   int num, acomp, qntsanduba, totsanduba=0;
    char molho;
    
    do{
    	printf("************* Restaurante *************");
    	printf("\nBem-vindo! Escolha seu pedido:");
    	printf("\n1 - Sanduiche");
    	printf("\n2 - Bebida");
    	printf("\n3 - Pedir a conta");
    	printf("\nDigite Opcao: ");
    	scanf("%d",&num); 
    	
    	switch (num)
  		{
     		case 1 :
     			system("cls");
       			printf ("Sanduiche");
       			printf ("\nQuantos acompanhamentos voce deseja:");
       			scanf("%d",&acomp);
       			system("cls");
				printf ("\nVoce deseja molho(s/n)?:"); 
				scanf("%c",&molho);
				system("cls");
				printf ("\nQuantos sadubas voce deseja?:"); 
				scanf("%d",&qntsanduba);
				
				if(molho=='s'){
					totsanduba = (5+(2*acomp)+3)*qntsanduba;	
				} else if(molho=='n'){ 
					totsanduba = (5+(2*acomp))*qntsanduba;
				}
				system("cls");
				printf ("\nPreco final: R$ %d",totsanduba);
				printf ("\n");
     		break;
 
     		case 2 :
       			system("cls");
				printf ("Bebida\n");
				
    	 	break;
    	 	
     		default :
     			system("cls");
       			printf ("\nOpcao invalida!\n\n");
  		}
    	    	
	}while(num!=3);
    
    system("cls");
    printf("Conta final R$ %d",totsanduba);
    
    puts("\n");
    system("pause");  
    return 0;   
}
