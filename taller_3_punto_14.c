#include <stdio.h>
/*programa funcion que determina si una matriz si una matriz es simetrica o no
elaboro alejandro gonzalez
fecha 24/09/2017*/

void pedirDatos();
void comprobarSimetria (int m[][100],int,int);
int m[100][100],filas,columnas;

int main() {
	pedirDatos();
	comprobarSimetria ( m,filas,columnas);
	return 0;
}

void pedirDatos(){
	printf ("numeros de filas \n");
	scanf ("%d",&filas);
	printf ("numero de columnas \n");
	scanf ("%d",&columnas);
	for (int i=0;i<filas;i++){
		for (int j=0;j<columnas;j++){
			printf("digite el numero \n");
			scanf ("%d",&m[i][j]);
		}
	}
}
void comprobarSimetria (int m[][100],int filas,int columnas){
	int cont =0;
	if(filas==columnas){
		for (int i=0;i<filas;i++){
		   for (int j=0;j<columnas;j++){
			   if (m[i][j]==m[j][i]){
				   cont ++;
			   }
            }		
			
		}
	}
	if(cont == filas*columnas){
		printf ("la matriz es simetrica");
	}
	else{
		printf ("la matriz no es simetrica");
	}
}

