#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char buf[80];
	int is = 0;
	gets(buf);
	
	puts(buf);
	
	char *ptr, *ptr1;
	
	ptr1 = buf;
	ptr = &buf[strlen(buf) - 1];
	
	printf("%d\n", ptr1);
	printf("%d", ptr);
	
	while(ptr1 < ptr)
	{
		if(*ptr1 != *ptr)
		{
			is = 1;
			printf("Notsame buf = %c and ptr = %c\n", *ptr1, *ptr);
			break;
		} else
		{
			printf("same buf = %c and ptr = %c\n", *ptr1, *ptr);
		}
		ptr1++; ptr--;
	}
	
	if(is)
		printf("NO");
	else
		printf("YES");
	
	return 0;
}
