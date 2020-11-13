#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char buf[80];
	char buf2[80];
	gets(buf);
	
	int i = 0, ii = 0;
	while(buf[i])
	{
		if(islower(buf[i]))
			buf2[ii] = toupper(buf[i]);
			
		if(isupper(buf[i]))
			buf2[ii] = tolower(buf[i]);
			
		if(isdigit(buf[i]))
		{
			i++;ew
			continue;
		}
		ii++;
		i++;
	}
	
	puts(buf2);
	return 0;
}
