#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef enum { false, true } bool;
bool IsPrime(int);
void BuildPrime(int);
int FactorTimes(int, int);
int fibonaci(int);
char* PrimeFactor(int);

int main(int argc, char *argv[]) {
	
	int i,j,k;
	int a = 0, b = 0;
		
	int r;
	
	r = FactorTimes(792, 3);
		
	printf("r21 = %d", r);
	printf("\n");
	BuildPrime(50);
	
	char * str;
	
	printf("\n");
	str = PrimeFactor(1100);
	
	printf("\n");
	
	printf(" %s", str);

	return 0;
}

bool IsPrime(int pInt)
{
	int i = 0, cnt = 0;
	
	for(i = 1; i <= pInt; i++)
	{
		if(pInt % i == 0)
			cnt++;
	}
	
	if(cnt > 2)
		return false;
	else
		return true;
}

//使用pointer 來做陣列運算 
void BuildPrime(int pNum)
{
	int PrimeAry [2000] = {NULL};
	int i = 0, cnt = 0;
	for(i = 1; i <= pNum; i++)
	{
		if(IsPrime(i) == true)
		{
			PrimeAry[cnt] = i;
			cnt++;
		}
	}
	
	for(i = 0; i < 2000 ; i++)
	{
		if(PrimeAry[i] != NULL)
		printf(" %d", PrimeAry[i]);
	}
}

int FactorTimes (int n, int p)
{
	int r = 0;
	
	r = n % p;
	if(r != 0)
		return 0;
	else
		return FactorTimes((n / p), p) + 1;
}

int fibonaci(int i)
{
   if(i == 0)
   {
      return 0;
   }
   if(i == 1)
   {
      return 1;
   }
   return fibonaci(i-1) + fibonaci(i-2);
}

char* PrimeFactor(int n)
{
	int PrimeAry[2000] = {NULL};
	char str[100] = {0};
	
	int i = 0, cnt = 0;
	
	for(i = 2; i < n; i++)
	{
		if(IsPrime(i) == true)
		{
			//把所有的質數放在裡面 
			PrimeAry[cnt] = i;
			cnt++;
		}
	} 
	
	for(i = 0; i < cnt ; i++)
		printf("=>%d", PrimeAry[i]);

	printf("\n");
	
	if(IsPrime(n) == true)
	{
		itoa(n, str, 10);
		//itoa?
		return str;
	}else{
		
		for(i = 0; i < cnt; i++)
		{
			char tmp [10];
			int times = 0;
			
			//1 和 自己不能在裡面  所以上面的迴圈要把自己還有1排除 
			times = FactorTimes(n, PrimeAry[i]);
			
			if(times > 0)
			{
			
				//印出質數 
				itoa(PrimeAry[i], tmp, 10);
				strcat(str, tmp);
				
				strcat(str, "^");
				
				//印出質數的倍數 
				itoa(times, tmp, 10);
				strcat(str, tmp);
				strcat(str, " * ");
			}
		}
		str[strlen(str)-1] = 0;
		str[strlen(str)-2] = 0;
		//str[strlen(str)-3] = 0;
		return str;
	}
	
}
