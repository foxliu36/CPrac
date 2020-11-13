#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char buf[80];
	int count = 0;
	gets(buf);
	
	 char *p;
	 p = buf;
	 
	 while(*p)
	 {
	 	if(*p == 'a')
	 		count++;
		p++;
	 }
	 
	 printf("count = %d", count);
	
	return 0;
}
