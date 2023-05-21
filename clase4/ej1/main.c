#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int pico(int);
int main() {
	int cat, dia,e,contA=0,contT=0,tot,totDTot=0,d,vuelto;
	char h, p;
	do {
		printf("Ingrese categoria: \n1_Moto\n2_Auto\n3_Camioneta\n4_Camion\n");
		scanf("%d",&cat);
		printf("Ingrese dia: \n1_Lunes\n2_Martes\n3_Miercoles\n4_Jueves\n5_Viernes\n6_Sabado\n7_Domingo\n");
		fflush(stdin);
		scanf("%d",&dia);
		printf("Ingrese horario: \na_Pico\nb_No pico\n");
		fflush(stdin);
		scanf("%c",&h);
		
		system("cls");
		switch(cat){
		case 1: 
			 tot=5;
 			 break;
 		case 2: 
			 tot=10;
 			 break;
		case 3: 
			 tot=15;
 			 break;
		case 4: 
			 tot=20;
 			 break;	
		default:
			printf("No es una categoria");
	}
	switch(dia){
		case 1: 
 		case 2: 
		case 3: 
		case 4: 		 
		case 5: 
			 if(h=='a'){
			 	tot=tot*1.20;
			 	if(cat==2){
			 		contA++;
				 }
			 }else{
			 	tot=tot*0.8;
			 }
 			 break;
		case 6: 
 		case 7: 
 			 tot=tot*0.8;
 			 if(h=='a'&&cat==2){
		 		contA++;
			 }
 			 break; 
		default: 
			printf("No es un dia de la semana"); 
	}
	printf("\nSe debe cobrar: $%d\n",tot);
	printf("Ingrese dinero recibido\n");
	fflush(stdin);
	scanf("%d",&d);
	vuelto=d-tot;
	if(vuelto<0){
		printf("\nFalta dinero");
	}else{
		printf("\nSu vuelto es de: $%d\n",vuelto);
	}
	totDTot+=tot;
	contT++;
	system("pause");
	system("cls");
	printf("Desea continuar? s/n\n");
	fflush(stdin);
	scanf("%c",&p);
	
} while(p=='s');

	system("cls");
	printf("La cantidad de ventas de categoria auto en horario pico es de :%d",contA);
	printf("\nSe vendio un total de %d pases con una recaudacion de: $ %d",contT,totDTot);
	return 0;
}

