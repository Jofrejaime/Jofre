#include <stdio.h>

int main(int argc, char** argv)
{
	int soma=0,c;
	for(c=1; c<=500; c++){
		if(c%3==0){
			if(c%2==0)
			soma = soma + c;
			
		}
	}
	printf("O somatorio dos numeros impares e multiplos de 3 no intervalo de 500 e: %i", soma);
	return 0;
}