#include <stdio.h>
int main(int argc, char** argv)
//A ração dos gatos
{
	float racaopeso, gatoracaoqt;
	printf("Digite O peso do saco de racao e quantidade para cada gato em gramas:\n");
	scanf("%f%f", &racaopeso, &gatoracaoqt);
	
	float quantgeralpordia = gatoracaoqt*2;
	//agora vou converter a racao consumida em quilo
	 float raccgatoquilo=((racaopeso*1000)/(racaopeso*quantgeralpordia));
	 printf("quantidade entre os dois %f \n o quilo %f",quantgeralpordia, raccgatoquilo );
	 float dias5 = racaopeso - raccgatoquilo*5;
	 printf("Em cinco dia ainda restara %fkg de racao", dias5 );
	 
	
	return 0;
}