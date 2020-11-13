#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, c;
	printf("輸入三個整數\n");
	
	scanf("%d %d %d", &a, &b, &c);
	
	if(a > b)
	{
		if(b > c)
			printf("%d %d %d", c, b, a);
		else{
			if(c > a)
				printf("%d %d %d", b, a, c);
			else
				printf("%d %d %d", b, c, a);
		}
		
	}else
	{
		if(a > c)
			printf("%d %d %d", c, a, b);
		else{
			if(b > c)
				printf("%d %d %d", a, c, b);
			else
				printf("%d %d %d", a, b, c);
		}
	}
	return 0;
}


