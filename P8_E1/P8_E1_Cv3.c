/* Realizar un programa para calcular el logaritmo natural de un numero x > 0 */
/* ingresado por teclado, según la serie, con 6 decimales de precision */
// Librerias
#include<stdio.h>
#include<conio.h>
// Declaracion de Funciones
void Enunciado();
int N_terminos(float);
float Potencia(float , int);
// Funcion principal
int main() {
	// Declaracion de variables
	int  i, fin , var_aux_2;
	float n, s = 0,var_aux = 0, pot;
	//  Muestra el enunciado y la peticion de datos ademas de aclarar las condiciones de uso,del programa
	Enunciado();
	// Toma de datos
	scanf("%f",&n);
	// Condicional para los valores validos
	if (n<1 && n>-1) {
		// Calcula el nro de terminos 
		fin = N_terminos(n);
		// Iniciando el ciclo for para la sumatoria
		for (i=0 ; i<= fin ; i++) {
			var_aux = 2*i+1;
			// Llamando a la funcion Potencia
			pot = Potencia(n , var_aux);
			// Calculos necesarios para la sumatoria
			s = s+(2/var_aux)*pot;
		}
		// Muestra de resultados
		printf(" Sean %d terminos acumulados, dan:\n",fin);
		printf("\n\t\t S = %2.10f\n",s);
	} else {
		printf(" Valor invalido.\n");
	}
	printf("\n Terminando programa\n");
	getch();
}

void Enunciado(){
	printf("\n\t\t * EJERCICIO 1 *");
	printf("\n\n\t Realizar un programa para calcular el logaritmo");
	printf("\n\t natural de un numero -1<x<1 ingresado por teclado");
	printf("\n\t según la serie\n");
	printf("\n\t S = [ 2/(2*n+1) ]*[ (x-1)/(x+1) ]^(2*n+1)");
	printf("\n\n\t * Ingrese el valor de x:");
	printf("\n\n\t\t   x = ");
}

int N_terminos(float n){
	int cont = 0, cond;
	float var_aux, t_n;
	//t_n -> 0 ; el ciclo obtendra la cantidad de terminos necesarios
	printf("\n");
	do {
		var_aux = 2*cont+1;
		t_n = (2/var_aux)*Potencia(n , var_aux);
		cond = t_n*10000000000;//Para obtener mas decimales
		cont++;
		// Para mostrar los terminos calculado pero solo si son menores a 7
		if(cont<=7)
			printf("\t     T_%d\t=\t%2.10f\n",cont,t_n);
	} while (cond!=0);
		if(cont>7){
			printf("\t      .\t\t.\t\t.\n");
			printf("\t      .\t\t.\t\t.\n");
			printf("\t      .\t\t.\t\t.\n");
			printf("\t     T_%d\t->\t\t0\n",cont);
		}
	printf("\n");
	return cont;
}

float Potencia(float n, int fin){
	int j;
	float pot = 1;
	// para realizar la potencia hasta 2*i+1
	for(j=0;j<fin;j++){
		pot*= (n-1)/(n+1);
	}
	return pot;
}




















