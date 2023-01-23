#include<stdio.h>

int main() {
	int i,j,n,var_aux;
	printf("\n");
	printf("\n");
	n = 6;
	var_aux = 0;
	for (i=1;i<=n;i++){
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
	printf("\n");
	printf("\n");
	return 0;
}
