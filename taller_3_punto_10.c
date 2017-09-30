#include <stdio.h>
/*programa: realice una funcion que tome como parametros un vector de numeros
enteros y devuelva la suma de sus elementos 
elaboro :alejandro gonzalez
24/09/2017*/
void pedirDatos();
int calSuma(int vec[],int tam);
int vec[100],tam;

int main() {
	pedirDatos();
	printf ("la suma de los elementos es :%d\n",calSuma(vec,tam));
	
	
	return 0;
}

void pedirDatos(){
	
	printf("ingrese el numero de elemntos del vector \n");
	scanf("%d",&tam);
	for (int i=0;i<tam;i++){
		printf(" digite el numero \n");
		scanf("%d",&vec[i]);
	}
}
int calSuma(int vec[],int tam){
	int suma=0;
	for (int i=0;i<tam;i++){
		suma +=vec[i];
	}
	return suma;
}
