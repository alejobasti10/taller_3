/*programa: funcion que toma como parametros un vector de enteros y su tamaño
e imprima un vector con los elementos impares del vector recibido
elaboro alejanro gonzalez
26 09 2017*/
#include <stdio.h>
void pedirDatos();
int elementosImpares();
int i;
int vect[100],tam;

int main() {
	pedirDatos();
	elementosImpares();
	return (vect[i]);
}

void pedirDatos(){
	printf ("digite el tamaño del vector\n");
	scanf ("%d",&tam);
	for (int i=0;i<tam;i++){
		printf ("ingrese el numero del vector en la pocision %d\n",i+1);
		scanf("%d",&vect[i]);
	}
}
int elementosImpares(){
	for (i=0;i<tam;i++){
		if (vect[i]%2==1){
			printf("los elementos impares son: %d\n",vect[i]);
		}
	}
		return (vect[i]);
	}

