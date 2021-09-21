#include <stdio.h>

int main(int argc, char** argv)
{
	printf("insira os numeros e será mostrado os ducessores: ");
	int num, suc;
	do{
		scanf("%i", &num);
		suc = num ++;
		printf("Sucessor: %i\n", num );
	}while(num>0);
	
		
	
	return 0;
}