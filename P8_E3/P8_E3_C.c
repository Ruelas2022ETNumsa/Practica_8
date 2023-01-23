// Mostrar en la pantalla un triangulo invertivo 
// cuya altura sea igual al nro ingrasado por teclado

// librerias
#include<stdio.h>
#include<conio.h>

// funcion principal
int main() {
	// declaracion de variables
	int i,j,n,var_aux;
	// enunciado y peticion de datos
	printf("\n\t\t* EJERCICIO 3 *\n");
	printf("\n\tIngrese un numero entero :");
	printf("\n\n\t\t n = ");
	scanf("%d",&n);
	printf("\n");
	var_aux = 0;
	// Comienza el ciclo for
	for (i=1;i<=n;i++){
		printf("\t\t");
		for (j=1;j<=2*n-1-var_aux;j++){
			if (i<=j) {
				printf(" *");
				if (i==j) {
					var_aux = j-1;
				}
			} else {
				printf("  ");
			}	
		}
		printf("\n");
	}
	printf("\n\n\tTerminando el programa");
	getch();
}
