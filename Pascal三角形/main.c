#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int combi(int r, int n);

int main(int argc, char *argv[]) {
	int r;
	int HEIGHT = 5;
	
    for(r = 0; r < HEIGHT; r++) {
        char format[5];            
        sprintf(format, "%%%ds", (HEIGHT - r) * 3);
        printf(format, "");
        int n;
        for(n = 0; n <= r; n++) {
            printf("%6d", combi(r, n));
        }
        printf("\n");
    }
	return 0;
}

int combi(int r, int n)
{
	int p = 1;
	int i;
	for(i = 1; i <= n; i ++)
		p = p * (r - i + 1) / i;
	
	return p;
}
