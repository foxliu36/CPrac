#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int count = 0;
	int foot = 0;
	int rabit = 0;
	int chicken = 0;
	
	printf("�@���X������?\n");
	scanf("%d", &count);
	printf("�@���X���}?\n");
	scanf("%d", &foot);
	
	rabit = (foot - 2*count) / 2;
	
	chicken = count - rabit;
	
	printf("���� %d �ߤl�� %d", chicken, rabit);
	
	return 0;
}
