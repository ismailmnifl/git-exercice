#include <stdio.h>
#include <stdlib.h>

int main ()
{

	int fNum;

	do
	{
		printf("how many friends do you have?");
		scanf("%i", fNum);
	} while(fNum <= 0);
	char nom[fNum][100];
	printf("bonjour les amis \n");
	
	
	for (int i = 0 ; i < fNum ; i++)
	{
		printf("tapez votre nom ici :  ");
		scanf("%s",nom[i]);	
	}
	
		for (int i = 0 ; i < fNum ; i++)
	{
		printf("\nsalut : %s\n",nom[i]);	
	}
}
