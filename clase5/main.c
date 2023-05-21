#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int cal,tipo, contP=0,contF=0,contL=0,contG=0,contFr=0,bandera=0,calM,tipoM;
	char nDAlim[20],isO,p,nDAlimM[20];
	do {
		printf("Ingrese nombre del alimento:\n");
	scanf("%s",&nDAlim);
	printf("Ingrese calorias del alimento:\n");
	fflush(stdin);
	scanf("%d",&cal);
	if(cal>150){
		printf("Alimento no recomendable\n");
	}else{
		printf("Alimento recomendable\n");
	}
	printf("Ingrese tipo de alimento:\n1_Panes y cereales\n2_Frutas y verduras\n3_Lacteos y carnes\n4_Grasas y azucares\n");
	fflush(stdin);
	scanf("%d",&tipo);
	printf("El alimento es organico? s/n\n");
	fflush(stdin);
	scanf("%c",&isO);
	switch(tipo){
		case 1:
			contP+=cal;
			break;
		case 2:
			contF+=cal;
			if(isO=='s'){
				contFr+=1;
			}
			break;
		case 3:
			contL+=cal;
			break;
		case 4:
			contG+=cal;
			break;
		default: 
				 printf("No es un tipo de alimento");
	}
	if(bandera==0){
		strcpy(nDAlimM,nDAlim);
		calM=cal;
		tipoM=tipo;
		bandera=1;
	}
	if(calM>cal){
		strcpy(nDAlimM,nDAlim);
		calM=cal;
		tipoM=tipo;
	}
	printf("Desea continuar? s/n\n");
	fflush(stdin);
	scanf("%c",&p);
	system("cls");
	} while(p=='s');
	system("cls");
	
	printf("La cantidad de frutas y verduras organicas que ingerio es de %d\n",contFr);
	printf("El alimento con menos calorias es: %s de tipo %d con un total de %d calorias\n",nDAlimM,tipo,cal);
	printf("Los alimentos que ingerio el paciente fue:\n1_Panes y cereales: %d calorias\n2_Frutas y verduras: %d calorias\n3_Lacteos y carnes: %d calorias\n4_Grasas y azucares: %d calorias\n");
	
	return 0;
}
