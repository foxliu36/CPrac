#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int p;
	printf("plz enter a number==>"); scanf("%d", &p);
	printf("%d--------->", p);bitdisplay(p);
	return 0;
}

void bitdisplay(unsigned int p)
{
	unsigned int mask, i, a, ok;
	mask = 0x0001;
	mask <<= 31;
	ok = 0;
	for(i = 0; i < 32; i++)
	{
		a = p & mask;
		if(a == 0)
		{
			if(ok == 1)
			printf("%c", '0');
		}else{
			printf("%c", '1');
			ok = 1;
		}
		mask >>= 1;
	}
}
