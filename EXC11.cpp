#include <stdio.h>
//equacao do segundo grau
int main(int argc, char** argv)
{
	int a, b, c;
	printf("introduza os valores de A, B, C para a equação\n");
	scanf("%i%i%i", &a,&b,&c);
    int Delta = (b*b)-4*a*c;
    if(Delta>0){
	int 	X1= (-b+(Delta)*0.5)/2*a;
    int     X2= (-b-(Delta)*0.5)/2*a;
    printf(" X1 = %i\nX2 = %i", X1, X2);
	}else{
		printf("O valor de Delta é invalido");
	}
	return 0;
}