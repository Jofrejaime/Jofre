/*16 – Faça um programa que receba a altura de 15 pessoas. Este programa deveraì
calcular e mostrar.
a) A menor altura do grupo
b) A maior altura do grupo*/
#include <stdio.h>

int main(int argc, char** argv)
{
	float altura;
	int c;
	float maior=0, menor=0;
	printf("Digitem as alturas:\n");
	for(c=0; c<15;c++){
		scanf("%f", &altura);
		if(c==0)
			menor=altura;
		if(altura>maior)
			maior = altura;
		if(altura<menor)
			menor=altura;
	}
	printf("A maior altura e: %f\nA menor altura e: %f\n", maior, menor);
	return 0;
}