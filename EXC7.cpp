#include <stdio.h>

int main(int argc, char** argv)
{
       float preco, perlucro, pdesconto, pimposto;
	printf("Digite o Preco de fabrica do carro: ");
	scanf("%f", &preco);
	 printf("Digite a percenagem de Lucro: ");
	scanf("%f",&perlucro);
	printf("O percentual de Desconto: ");
	scanf("%f", &pdesconto);
	printf("O percentual de imposto; ");
	scanf("%f", &pimposto);
	
	float distrib = (preco*perlucro)/100;
	float imposto = (preco*pimposto)/100;
	float precoveiculo = preco +(distrib + imposto);
   printf("O preco do Distribuidor e de: %f \n O preco do imposto e: %f \n", distrib, imposto);
   printf("O preco do veiculo e: %f com o desconto e: %f ", preco, precoveiculo - pdesconto);	
	
	return 0;
}