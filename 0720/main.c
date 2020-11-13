#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i=0, j=0, k=0;
	int level;
	
	printf("plz enter a number: \n");
	scanf("%d", &level);
	
	for(i = 0; i < level; i++)
	{
		for(j = 0; j < level - i ; j++)
		{
			printf(" ");
		}
		
		for(k = 0; k < 2 * i+1; k ++)
		{
			printf("*");
		}
		
		printf("\n");
	}
	
	//====================================¤W¥bª÷¦r¶ð====================================
	
	for(i = 0; i < level -1; i++)
	{
		for(j = 0; j < i + 2; j++)
		{
			printf(" ");
		}
		
		for(k = 0; k < 2 *(level - 2 -i ) + 1; k++ )
		{
			printf("*");
		}
		printf("\n");
	} 
	
	return 0;
}
