// realizar un triangulo tomando un valor ingresado y
// el nro de filas sea igual  a dicho nro, ademas 
// el nro de columnas sera igual al doble -1 ; 
// debera iniciar la fila desde el nro 1 u terminar
// cuando esta llegue a ser igual a la columna, y
// apartir de ese punto reducir su valor hasta 0

// Librerias
#include<stdio.h>
#include<conio.h>
// Funcion principal
main(){
	// Declaracion de variables
	int n,i,j,var_aux;
	// Pericion de datos y titulo
	printf("\n\t\t* EJERCICIO 2 *\n");
	printf("\n\tIngrese un numero entero :");
	printf("\n\n\t\t n = ");
	scanf("%d",&n);
	printf("\n");
	// Comienza el ciclo for
	for(i=1 ; i<=n ; i++){
		printf("\t\t");// Espacios para que no este pegada a un costado de la pantalla
		for(j=1 ; j<=2*n-1 ; j++){
			// Condicional para la 1ra parte del triangulo ( Hasta la diagonal de la matriz )
			if( i>=j ){
				printf(" %d",j);
				var_aux = j-1;
			}else if(var_aux!=0){// Condiconal para mostrar la 2da parte del triangulo
				do{
					printf(" %d",var_aux);
					var_aux--;
				}while(var_aux>0);
			}	
		}
		printf("\n");
	}
	printf("\n\n\tTerminando el programa");
	getch();
}
