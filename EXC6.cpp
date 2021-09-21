#include <stdio.h>
//exercicio 5
main ()
{
	float salario, aumento, peraumento;
	printf("Digite o salario e o aumento\n");
	scanf("%f%f", &salario, &peraumento);
	aumento=(salario*peraumento)/100;
	printf("O seu aumento foi de %fkz e o seu novo salario é de %fkz\n", aumento, aumento+salario);
}