#include <stdio.h>
/*programa: funcion llamada mult que acepte dos numeros en punto flotante
como parametros,multiplique estos dos numeros y despliegue el resultado
elaboro:alejandro gonzalez
fecha 19 sept 2017*/
int mult(float num1,float num2) {	
	float result=0;
	scanf ("%f",&num1);
	scanf ("%f",&num2);
	result= num1*num2;
	printf ("la multiplicacion es: %f",result);
	return result;
}

int main() {
	float num1;
	float num2;
	 
	mult (num1,num2);
	
	return 0;
}
