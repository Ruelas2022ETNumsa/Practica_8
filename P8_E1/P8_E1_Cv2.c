/* Realizar un programa para calcular el logaritmo natural de un numero x > 0 */
/* ingresado por teclado, según la serie, con 6 decimales de precision */
#include<stdio.h>
#include<math.h>

void Enunciado();
int N_terminos(float);

int main() {
	int  i, fin , var_aux_2;
	float n, s=0,var_aux=0, p=1;
	
	int j;
	float pot;
	//  Muestra el enunciado y la peticion de datos
	// ademas de aclarar las condiciones de uso
	// del programa
	Enunciado();
	scanf("%f",&n);
	
	if (n<1 && n>-1) {
		// Calcula el nro de terminos
		fin = N_terminos(n);
		
		for (i=0 ; i<= fin ; i++) {
			var_aux = 2*i+1;
			
			pot = 1;
			for(j=0;j<var_aux;j++){
				pot*= (n-1)/(n+1);
			}
			
			//s = s+(2/(var_aux))*pow(((n-1)/(n+1)),(var_aux));
			s = s+(2/(var_aux))*pot;
			

			
		}
		
		
		
		
		printf(" El valor sera calculado con %d terminos es:\n",fin);
		printf("   S = %2.10f\n",s);
	} else {
		printf(" Valores invalidos.\n");
	}
	printf(" Terminando programa\n");
	return 0;
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
		t_n = (2/(var_aux))*pow(((n-1)/(n+2)),(var_aux));
		cond = t_n*10000000000;
		cont++;
		printf("\t     T_%d\t=\t%2.10f\n",cont,t_n);
	} while (cond!=0);
	printf("\n");
	return cont;
}



