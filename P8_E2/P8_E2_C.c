// realizar un triangulo tomando un valor ingresado y
// el nro de filas sea igual  a dicho nro, ademas 
// el nro de columnas sera igual al doble -1 ; 
// debera iniciar la fila desde el nro 1 u terminar
// cuando esta llegue a ser igual a la columna, y
// apartir de ese punto reducir su valor hasta 0

#include<stdio.h>
#include<conio.h>

main(){
	int n,i,j,var_aux;
	printf("\n\tIngrese un numero entero :");
	printf("\n\n\t\t n = ");
	scanf("%d",&n);
	
	for(i=1 ; i<=n ; i++){
		for(j=1 ; j<=2*n-1 ; j++){
			if( i>=j ){
				printf(" %d",j);
				var_aux = j-1;
			}else if(var_aux!=0){
				do{
					printf(" %d",var_aux);
					var_aux--;
				}while(var_aux>0);
			}	
		}
		printf("\n");
	}
	getch();
}
