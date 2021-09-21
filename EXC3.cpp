#include <stdio.h>
//Exercicio 3
 main(int argc, char** argv)
{
	int Nascimento, AActual;
 printf("Digite a sua data de nascimento e o ano actual\n");
 scanf("%i%i", &Nascimento, &AActual);
   int Idade = AActual - Nascimento;
   int A2050 = 2050 - Nascimento;
   printf("%i  e a sua idade actual. \n Em 2050 teras %i anos de idade\t", Idade, A2050 );
 
 
	return 0;
}