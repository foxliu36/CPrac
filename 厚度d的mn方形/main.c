#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// 
int main(int argc, char *argv[]) {

	int m, n, d;
	int i, j, k;
	printf("½Ð¿é¤Jm n d");
	
	scanf("%d",&m);
	scanf("%d",&n);
	scanf("%d",&d);
	
	for(i = 1; i <= n; i++)
	{
		if(i <= d || (i > n - d))
		{
			for(j = 1; j <= m; j++)
				printf("*");
		}
		else{
			for(j = 1; j <= d; j++)
				printf("*");
			
			for(j = 1; j <= m-2*d; j++)
				printf(" ");
			
			for(j = 1; j <= d; j++)
				printf("*");
		}
		
		printf("\n");
	}
	
	return 0;
}
