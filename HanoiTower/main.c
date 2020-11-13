#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void Hanoi(int, char, char, char);

int main(int argc, char *argv[]) {
	Hanoi(4, 'a', 'b', 'c');
	
	
	return 0;
}

void Hanoi(int n, char a, char b, char c)
{
	if(n == 1)
		printf("\n n = %d %c move to %c", n, a, c);
		
	else{
		Hanoi(n-1, a, c, b);
		printf("\n n = %d  %c move to %c", n, a, c);
		Hanoi(n-1, b, a, c);
	}
}


