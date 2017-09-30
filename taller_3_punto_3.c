#include <stdio.h>
/*progrma: funcion nombrada funpot() que eleva un numero entero que se le 
transmita a una potencia en numero entero positivo y despliegue el resultado
el numero entero positivo debera ser el segundo valor transmitido a la funcion
elaboro: alejandro gonzalez
22/09/17*/

void pedirDato();
void funpot(int x,int y);
int num;
int expon;


int main() {
	pedirDato();
	funpot(num,expon);
	return 0;
}

void pedirDato(){
	printf("ingrese el numero \n");
	scanf("%d",&num);
	printf("ingrese el exponente \n");
	scanf("%d",&expon);
}
void funpot(int x,int y){
	int i;
	int	 result=1;
	for (i=0;i<=y;i++){
		result *= x;		
	}
	printf("el resultado es :%d \n",result);
}
