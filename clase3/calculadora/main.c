#include <stdio.h>
#include <stdlib.h>
#include <string.h>	

int main() {
	int d1,d2,res;
	char op, next[3];
	float div;
	
	printf("Desea Realizar una operacion? Si/No ");
	scanf( "%s", &next );
	
	while(strcmp(next, "Si")==0){
 					   printf( "Introduzca tipo de operacion: \nr=resta\ns=suma\nm=multiplicacion\nd=divicion\n");
 					   fflush( stdin );
					   scanf("%c", &op );
					   system("cls");
					   printf("Introdusca el primer numero: \n");
					   fflush( stdin );
					   scanf( "%d", &d1);
					   printf("Introdusca el segundo numero: \n");
					   fflush( stdin );
					   scanf( "%d", &d2);
					   
					   switch(op) {
   			  		    case 'r':
   			  		    	res=d1-d2;
   			  		    	printf("\nEl resultado es: %d", res);
   			  		    	break;
  						case 's':
   			  		    	res=d1+d2;
   			  		    	printf("\nEl resultado es: %d", res);
   			  		    	break;
  						case 'm':
   			  		    	res=d1*d2;
   			  		    	printf("\nEl resultado es: %d", res);
   			  		    	break;
  						case 'd':
   			  		    	div=(float)d1/d2;
   			  		    	printf("\nEl resultado es:%f", div); 
   			  		    	break;
					   default:
					   		printf("No es una operacion");
						}

					   
					   /*if(strcmp(op, "r")==0){
				   	   				 res=d1-d2;
					   }else if(strcmp(op, "s")==0){
				   	   				 res=d1+d2;
					   }else if(strcmp(op, "m")==0){
				   	   				 res=d1*d2;
					   }if(strcmp(op, "d")==0){
				   	   				 div=d1/d2;
					   }*/
					   /*if(strcmp(&op, "d")==0){
					   	printf("\nEl resultado es: %d", res);
					   }*/
					   
					   printf("\nDesea continuar? Si/No\n");
					   scanf( "%s", next );
					   system("cls");
	
	}
	
	return 0;
}
