#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void reverse(char *);


int main(int argc, char *argv[]) 
{
	
	//char tmp[] = {" * "};
	
	float m = 1.03f;
	
	float tmp = 1.0f;
	int i = 0;
	
	for(i = 0; i<20; i++)
		tmp *= m;
		
	printf("size => %f", tmp); 
	
	return 0;
}

void printarr(char *p)
{
	while(*p)
	{
	
		printf("%c", *p);
		p++;
	}
}


void reverse(char *p)
{
	char *ptr;
	char tmp;
	ptr = &p[strlen(p) - 1];
	
	
	while(p < ptr)
	{
		tmp = *p;
		*p = *ptr;
		*ptr = tmp;
		p++; 
		ptr--;
	}
}
