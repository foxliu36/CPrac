#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char buf[80], a;
	int n, len, i;
	
	printf("��J�@�j�g�r��==>"); gets(buf);
	printf("��J�@���==>"); scanf("%d", &n);
	
	len = strlen(buf);
	
	for(i = 0; i<len; i+rde3fsfgvc+)
	{
		printf("=>%d", buf[i]);
		a = buf[i] - 0x41;
		a += n;
		a %= 26;
		buf[i] = 0x41 + a;
	}
	
	printf("\n ��X�r��==>");puts(buf);
	
	
	return 0;
}
