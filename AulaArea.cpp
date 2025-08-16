// Calculo da area - Miguel Souza
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* int main(void)
{	
	float area,lado;
	
	printf("Digite o lado: \n");
	scanf("%f",&lado);
	
	if(lado <= 0)
	{
		printf("Numero Invalido: %f",lado);
		return 1;
	}
	else
	{
	area= lado * lado;	
	printf("Seu valor da area: %.0f ",area);
	return 0;
	}
}*/

int main(void)
{	
	float area,lado;
	
	printf("Digite o lado: \n");
	scanf("%f",&lado);
	
	area= lado * lado;	
	printf("Seu valor da area: %.0f ",area);
	
	return 0;	
}