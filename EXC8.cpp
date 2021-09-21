#include <stdio.h>
int main(int argc, char** argv)


{
   float salamin, horastrab;
	printf("Digite o Salario minimo e o numero de horas trabalhadas: ");
	scanf("%f%f", &salamin, &horastrab);
	
   float horatra = salamin/2;
   float salabruto = horastrab * horatra;
   float imposto = (salabruto*3)/100;
   float salario = salabruto - imposto;
   printf("\nO salario a receber e de: %f", salario );
	
	return 0;
}