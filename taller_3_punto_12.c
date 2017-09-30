#include <stdio.h>
/*programa: realiza una funcion que tome como parametros un vector de numeros
y su tamaño y cambie el signo de los elementos del vector
elaboro:alejandro gonzalez
fecha 24/09/2017*/
void pedirDatos();
void cambiarSigno(int vec[],int tam);
void mostrarVec(int vec[],int tam);
int vec[100],tam;

int main() {
	pedirDatos();
	cambiarSigno(vec,tam);
	mostrarVec(vec,tam);
	return 0;
}
void pedirDatos(){
	printf ("tamaño del vector\n");
	scanf ("%d",&tam);
	for (int i=0;i<tam;i++){
		printf ("digite el numero\n");
		scanf("%d",&vec[i]);
	}
	
}
void cambiarSigno(int vec[],int tam){
	for (int i=0;i<tam;i++){
		vec[i] *= -1;
	}
}
void mostrarVec(int vec[],int tam){
	printf ("mostrando elementos del vector con signo cambiado \n");
	for (int i=0;i<tam;i++){
		printf ("%d\n",vec[i]);
	}
}
