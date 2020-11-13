#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char pri;
	int count, i, j, k;
	
	scanf("%c %d", &pri, &count);
	
	printf("%c %d\n", pri, count);
	
	for(i = 1; i <= count; i++)
	{
		for(j = 1; j <= count - i; j++)
			printf(" ");
		for(k = 1; k <= 2*i - 1; k++)
			printf("%c", pri);
			
		printf("\n");
	}
	
	return 0;
}
