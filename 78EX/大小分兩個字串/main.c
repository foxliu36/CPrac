#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char buf1[80], buf2[80], buf3[80];
	
	char *p1, *p2, *p3;
	
	gets(buf1);
	p1 = buf1;
	p2 = buf2;
	p3 = buf3;
	
	
	while(*p1)
	{
		if(isupper(*p1)) *p2++ = *p1;
		if(islower(*p1)) *p3++ = *p1;
		
		p1++;
	}
	*p2 = '\0'; *p3 = '\0';
	//因為p2 p3已經跑到後面了 所以只能用buf印 
	puts(buf2);
	puts(buf3);
	
	return 0;
}
