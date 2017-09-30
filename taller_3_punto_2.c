#include <stdio.h>
/*programa: funcion llamada al_cuadrado que calcule el cuadrado del valor
que se le transmite y despliegue el resultado la funcion debera ser capaz
de elevar al cuadrado numeros flotantes
elaboro: alejandro gonzalez
22/09/2107*/
void pedirDato();
void alCuadrado(float x);
float num;
float x;
float multiplic;
int main() {
	pedirDato();
	alCuadrado (num);
	return 0;
}

void pedirDato(){
	printf ("ingrese el numero a sacar el cuadrado: \n");
	scanf ("%f",&num);	
	
}
void alCuadrado(float x){
	float multiplic = num*num;
	printf("el cuadrado del numero es %f \n",multiplic);
}
