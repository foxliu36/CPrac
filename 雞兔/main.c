#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int count = 0;
	int foot = 0;
	int rabit = 0;
	int chicken = 0;
	
	printf("共有幾個雞兔?\n");
	scanf("%d", &count);
	printf("共有幾隻腳?\n");
	scanf("%d", &foot);
	
	rabit = (foot - 2*count) / 2;
	
	chicken = count - rabit;
	
	printf("雞有 %d 兔子有 %d", chicken, rabit);
	
	return 0;
}
