#include <stdio.h>
//CHICO E O JUCA
int main(int argc, char** argv)
{
int alturaChico=150, alturaJuca=110, contador=0;
do{
	alturaChico += 2;
	alturaJuca += 3;
	contador++;
}while(alturaJuca<=alturaChico);
printf("O Chico tem agora %icm e o Juca tem %icm e agoraJuca e mais alto e foi preciso %i anos\n", alturaChico, alturaJuca, contador);
	return 0;
}