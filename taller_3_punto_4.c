#include <stdio.h>
/*programa : devuelve la parte fraccionaria de cualquier numero introducido
por el usuario .por ejenplo, si se introduce el numero 256.879 deberia 
desplegarse el numero 0.879
elaboro.alejandro gonzalez
fecha 23/09/2107*/
float pedirDato();
float frac(float x);
float num;


int main() {
	pedirDato();
	frac(num);
	return 0;
}
float pedirDato(){
	printf ("ingrese el numero \n");
	scanf ("%f",&num);	
}
float frac(float x){
	int entero;
	float frac;
	entero=num;
	frac=num-entero;
	printf ("la fraccion del numero es :%f",frac);
	return frac;
}
