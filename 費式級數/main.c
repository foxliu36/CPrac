#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	printf("%d",fabire(6));
	return 0;
}

int fabi(int n)
{
	int tmp, i, j, a, b;
	a = 0; b = 1;
	
	if(n < 2)
		return n;
	for(i = 0; i < (n-1); i++)
	{
		tmp = a + b;
		a = b;
		b = tmp;
	}
	return tmp;
}

int fabire(int n)
{
	if(n < 2)
		return n;
	else
		return fabire(n-2)+fabire(n-1);
}
