#include <stdio.h>

int soma(int a, int b);

int main(){
	
	int n1, n2, resultado;
	
	printf("\nEntre com os dois numeros: \n");
	scanf("%d %d",&n1,&n2);
	
	resultado = soma(n1,n2);

	printf("%d",resultado);

	return 0;
	
}

int soma(int a, int b){
	
	return (a+b);
}
