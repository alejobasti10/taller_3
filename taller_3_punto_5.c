#include <stdio.h>
/*programa:plantilla de funcion llamada maximo() que devuelve el valor maximo
de tres argumentos que se transmiten a la funcion cuando sea llamada.
suponga que los tres argumento seran del mismo dato
elaboro alejandro gonzalez
23/09/2017*/
void pedirDato();
int maximo(int x,int y,int z);
int num1,num2,num3;
int mayor;
int main() {
	int x,y,z;
	pedirDato();
	maximo( num1,num2,num3);
	return 0;
}
void pedirDato(){
	printf ("ingrese los tres numeros \n");
	scanf ("%d",&num1);
	scanf ("%d",&num2);
	scanf ("%d",&num3);
}
int maximo(int x,int y,int z){
	mayor=x;
	if (mayor>y){
		mayor=x;
	}	
	if (y>mayor){
		mayor=y;
	}
	if(z>mayor){
		mayor=z;
	}
	printf ("el numero mayor es :%d",mayor);
	return mayor;
}
