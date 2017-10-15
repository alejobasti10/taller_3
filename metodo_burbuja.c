/*programa: metodo de ordenaminto burbuja
elaboro:alejandro gonzalez
15/10/17*/
#include <stdio.h>

int main() {
	int numeros[] = {4,1,2,3,5};
	int i,aux;
	int j;
	// metodo burbuja
	for (i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(numeros[j]> numeros[j+1]){
				aux=numeros[j];
				numeros[j]= numeros [j+1];
				numeros[j+1]=aux ;
			}
		}
	}
	printf ("\n Orden Ascendente :");
	for (i=0;i<5;i++){
		printf("\n%d",numeros[i]);
	}
	printf ("\n Orden descendente :");
	for (i=4;i>=0;i--){
		printf("\n%d",numeros[i]);
	}	
	return 0;
}

