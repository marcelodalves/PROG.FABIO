#include <stdio.h>
#include <math.h>

float media(float nt1, float nt2, float nt3);
float mediap(float ntp1, float ntp2, float ntp3);

int main(){
	float av1, av2, av3,mediaf;
	char op;
	
	printf("Entre com a ou p: ");
	scanf("%c",&op);
	
	printf("Insira a nota da prova 1: ");
	scanf("%f", &av1);
	printf("Insira a nota da prova 2: ");
	scanf("%f", &av2);
	printf("Insira a nota da prova 3: ");
	scanf("%f", &av3);
	
	if(op=='a'||op=='A'){
		mediaf=media(av1,av2,av3);	
	}
	if(op=='p'||op=='P'){
		mediaf=mediap(av1,av2,av3);
	}
	
	printf("A media final eh: %.2f", mediaf);
	
	return 0;
}

float media(float nt1, float nt2, float nt3){
	float calculo;
	calculo = (nt1+nt2+nt3)/3;
	return calculo;
}

float mediap(float ntp1, float ntp2, float ntp3){
	float peso1=5,peso2=3,peso3=2;
	float calculo;
	
	ntp1=ntp 1*peso1;
	ntp2=ntp2*peso2;
	ntp3=ntp3*peso3;
	
	calculo = (ntp1+ntp2+ntp3)/3;
	return calculo;
}
