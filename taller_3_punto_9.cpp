#include <stdio.h>
/*proograma: funcion nombrada calc_años() que tenga un parametro entero que
represente el numero total de dias desde la fecha 1/1/2000 y parametros de 
referencia nombrados año mes y dia: la funcion es calcular el año, mes y dia actual
para el numero dado de dias que se le transmitan. usando las refernencias, la funcion
debera alterar en forma directa los nargumentos respectivos en la funcion que 
llama. para este problema suponga que cada año tiene 365 dias y cada mes tiene 
30 dias 
elaboro alejandro gonzalez
26092017*/

	
void calc_anios(int anios, int mes, int dias,int numdias,int&d, int &m,int &a );
int anios,mes,dias,numdias,d,m,a;

int main() 
{
	calc_anios(anios,mes,dias,numdias,d,m,a);	
	return 0;
}

void calc_anios(int anios, int mes, int dias,int numdias,int&d, int &m,int &a )
{
 	int restodias;
	d=1;
	m=1;
	a=2000;

	printf("Ingrese numero de dias:\n");
	scanf("%d",&numdias);
	
	anios = numdias/365;
	restodias = numdias-(anios*365);
	mes = restodias/30;
	dias = restodias-(mes*30);
	
	d+=dias;
	m+=mes;
	a+=anios;
	printf("Los dias equivalen a:\n");
	printf("Dias: %d Mes: %d Año: %d\n",d,m,a);	
}
