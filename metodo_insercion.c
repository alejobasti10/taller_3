/*programa:ordenamiento por insercion
elaboro alejandro gonzalez
15/10/17*/
#include <stdio.h>

int main() {
	int numeros []={4,2,3,1,5};
	int i,pos,aux;
	// Ordenamiento por insercion
	for (i=0;i<5;i++){
		pos=i;
		aux=numeros[i];
		
		while ((pos>0) && (numeros[pos-1]>aux)){
			numeros[pos]=numeros[pos-1];
			pos --;			
		}
		numeros[pos]=aux;			
	}
	printf ("ORDEN ASCENDENTE \n");
	for (i=0;i<5;i++){
		printf("\n%d",numeros[i]);
	}
	printf ("\n ORDEN DESCENDENTE \n");
	for (i=4;i>=0;i--){
		printf("\n%d",numeros[i]);
	}
	return 0;
}

