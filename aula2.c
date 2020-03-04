#include <stdio.h>

int vet[10];
int busca(int numero);

int main(){
	
	int i, num , posicao, buscado;
	
	for(i=0;i<10;i++){
		printf("\nInsira um valor da posicao %d: ",i);
		scanf("%d",&vet[i]);
	} 
	
	printf("\nDigite o num para saber a posicao: \n");
	scanf("%d",&num);
	
	buscado = busca(num);
	
	printf("\nO numero esta na posicao %d",buscado);

	return 0;
}

int busca(int numero){
	
	int i, posicao;
	
	for (i=0;i<10;i++){
	if(vet[i]==numero){
		posicao = i;
	}
}
	return posicao;
}
