#include <stdio.h>
/*programa: intercambiar el valor de 2 variables utilizando paso de parametros
por referencia
elaboro: alejandro gonzalez
23/09/2017*/

int cambio_num(int &v1, int &v2);

int main()
{
	int a,b;
	
	a=10;
	b=100;
	cambio_num(a,b);
	
	printf ("los numeros son :%d y %d\n",a,b);
	
	return 0;
}
int cambio_num(int &v1, int &v2)
{
	v1=12;
	v2=24;
	return v1,v2;
}
