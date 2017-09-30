#include <stdio.h>
/*programa:funcion nombrada tiempo() que tenga un parametro en numero entero
llamado totalSeg y tres parametros de referencia enteros nombrados horas, min y 
seg La funcion es convertir el numero de segundos transmitido en un numero 
equivalente de horas, minutos y segundos.
elaboro alejandro gonzalez
23/09/2017*/

int tiempo(int totalseg, int &horas, int &min, int &seg);

int main() 
{
	int totalseg,horas,min,seg;
	printf("Ingrese cantidad de segundos: \n");
	scanf("%d",&totalseg);
	
	tiempo(totalseg,horas,min,seg);
	
	printf("El tiempo total es: \n %d Horas:%d Minutos:%d Segundos \n",horas,min,seg);
	return 0;
}

int tiempo(int totalseg, int &horas, int &min, int &seg)
{
	int totalmin;
	
	totalmin=totalseg/60;
	seg=totalseg-(totalmin*60);
	horas=totalmin/60;
	min= totalmin-(horas*60);
	
	return horas,min,seg;	
}
