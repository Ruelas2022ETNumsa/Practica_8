/* Realizar un programa para calcular el logaritmo natural de un numero x > 0 */
/* ingresado por teclado, según la serie, con 6 decimales de precision */
#include<stdio.h>
#include<math.h>

int main() {
	int cont =0, i;
	float n, s=0, t_n, var_aux;
//	printf(" Realizar un programa para calcular el logaritmo\n");
//	printf(" natural de un numero -1<x<1 ingresado por teclado\n");
//	printf(" según la serie\n");
//	printf(" S = [ 2/(2*n+1) ]*[ (x-1)/(x+1) ]^(2*n+1) \n");
	printf(" * Ingrese el valor de x:\n");
	printf("   x = ");
	scanf("%f",&n);
	
	if (n<1 && n>-1) {
		/* t_n -> 0 ; el ciclo obtendra la cantidad de terminos necesarios */
		do {
			var_aux = 2*cont+1;
			t_n = (2/(var_aux))*pow(((n-1)/(n+2)),(var_aux));
			i = t_n*10000000000;
			cont++;
			printf("T_n=%2.10f\n",t_n);
		} while (i!=0);
		for (i=0 ; i<= cont ; i++) {
			var_aux = 2*i+1;
			s = s+(2/(var_aux))*pow(((n-1)/(n+1)),(var_aux));
		}
		printf(" El valor sera calculado con %d terminos es:\n",cont);
		printf("   S = %2.10f\n",s);
	} else {
		printf(" Valores invalidos.\n");
	}
	printf(" Terminando programa\n");
	return 0;
}


















