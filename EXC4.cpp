#include <stdio.h>
//exercio 4
main ()
{
	float salario;
	printf("Digite o seu salario actula\n");
	scanf("%f", &salario);
	
	float aumento = (salario*25)/100;
    float actsalario = salario + aumento;
	printf("%f e o seu salario actua com o aumento de 25%% o seu salario actual e de: %f", salario, actsalario);
}