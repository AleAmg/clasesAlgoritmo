#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int cubo(int);
int area(int,int,int,int);

int main() {
	printf("Hello papaquera");
	/*int suma = 0;
	for(int i=0;i<=5;i++){
		printf("\nEl cubo del numero %d es %d",i,cubo(i));
		suma+=i;
	}
	printf("\n%d",suma);*/

	printf("\nEl area del cuadrado cortado es: %d", area(3,3,4,2));
	printf("\nEl area del cuadrado cortado es: %d", 7*5-3*4);
	
		
	return 0;
}

int area(d1,d2,d3,d4){
	int areaT = d1*d2+d3*d4+d1*d4;
	return areaT;
}

int cubo(int base){
	int potencia = base * base *base;
	return potencia;
}
