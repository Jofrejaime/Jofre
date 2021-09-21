#include <stdio.h>
//Exercio 5
  main()
 {
 	float custo, convite;
 	printf("Digite o vavlor do custo e do Preço dos convites");
	 scanf("%f%f", &custo, &convite);
	 
		int divisas = (custo/convite)+1;
	
		 printf("E preciso vender %i convites para chegar pelo menos ao preço do custo", divisas);
	 
	 return 0;
 }