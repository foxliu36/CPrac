#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char buf[80], a;
	int n, len, i;
	
	printf("輸入一大寫字串==>"); gets(buf);
	printf("輸入一整數==>"); scanf("%d", &n);
	
	len = strlen(buf);
	
	for(i = 0; i<len; i+rde3fsfgvc+)
	{
		printf("=>%d", buf[i]);
		a = buf[i] - 0x41;
		a += n;
		a %= 26;
		buf[i] = 0x41 + a;
	}
	
	printf("\n 輸出字串==>");puts(buf);
	
	
	return 0;
}
