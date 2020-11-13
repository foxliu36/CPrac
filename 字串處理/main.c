#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char s[] = "The spirit is willing r777 das but the flesh is weak.";
	char t[] = "but";
	char *test;
	test = strstr(s, t);
	printf("%s\n", test);
		
    return 0;    
}
