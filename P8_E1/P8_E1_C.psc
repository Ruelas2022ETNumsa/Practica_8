//Realizar un programa para calcular el logaritmo natural de un numero x > 0
//ingresado por teclado, según la serie, con 6 decimales de precision
Algoritmo P8_E1_D
	Escribir " Realizar un programa para calcular el logaritmo";
	Escribir " natural de un numero -1<x<1 ingresado por teclado";
	escribir " según la serie";
	Escribir " S = [ 2/(2*n+1) ]*[ (x-1)/(x+1) ]^(2*n+1) "
	Escribir " * Ingrese el valor de x:";
	Escribir Sin Saltar "   x = ";
	leer n;
	Si n<1 && n > -1 Entonces
		cont=0;
		S=0;
		// t_n -> 0 ; el ciclo obtendra la cantidad de terminos necesarios
		Repetir
			T_n=( 2/(2*cont+1) )*( (n-1)/(n+2) )^(2*cont+1);
			cont = cont+1;
			Escribir "T_n=",T_n;
		Hasta Que T_n==0
		Para j <- 0 Hasta cont Con Paso 1 Hacer
			S = S + ( 2/(2*j+1) )*( (n-1)/(n+1) )^(2*j+1);
		Fin Para
		Escribir " El valor sera calculado con ",cont," terminos es:";
		Escribir "   S = ",S;
	SiNo
		Escribir " Valores invalidos.";
	Fin Si
	Escribir " Terminando programa";
FinAlgoritmo