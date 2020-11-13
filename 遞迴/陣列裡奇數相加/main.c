#include <stdio.h>
#include <stdlib.h>
int OddSUM(int [], int);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[] = {1,2,3,4,5,6,7,8,10};
	
	int n = 9;
	int k;
	
	k = OddSUM(a, n);
	
	printf("%d", k);
	
	return 0;
}

int OddSUM(int a[], int n)
{
	//因為n是陣列的個數 所以要n-1 
	if((n == 1) && (a[0]%2)) return (a[n-1]);
	if((n == 1) && (a[0]%2 == 0)) return (0);
	if((n > 1) && (a[n-1]%2)) return (OddSUM(a, n-1) + a[n-1]);
	else return (OddSUM(a, n-1));
}
