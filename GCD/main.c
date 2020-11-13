#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int gcd(int, int);
int gcdinrec(int, int);

int main(int argc, char *argv[]) {
	
	int ans = gcdinrec(18, 27);
	
	printf("%d\n", ans);

	int ans2 = gcd(18, 27);

	printf("%d\n", ans2);
	
	return 0;
}

int gcd(int m, int n)
{
	int r;
	
	while(n != 0)
	{
		r = m % n;
		m = n;
		n = r;
	}
	
	return m;
}

int gcdinrec(int m, int n)
{
	return ((m % n)?gcdinrec(n, m % n):n);
}
