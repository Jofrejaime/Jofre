#include <stdio.h>

main()
{
	int numero, c;
	printf("insira os 10 numeros\n");	
	int pares = 0, sp=0, impares = 0, si=0;
	for(c = 0; c <10; c++){
		scanf("%i", &numero);	
		if(numero%2==0){
			pares ++;
			sp+=numero;
		}else{
			impares ++;
			si+=numero;
		}
	}
		int mediap = sp/pares; int mediai= si/impares;
			 printf("A media dos pares e: %i \nA media dos impares e: %i", mediap, mediai );	
	

	
}