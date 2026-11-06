#include <stdio.h>

unsigned long long factorial(int n);
 
int main()
{
	int n;
	if(scanf("%d", &n) != 1 || n > 20 || n <=0 ) return 1; //успешно ли считано? 
	printf("%llu", factorial(n));
	return 0;
	
}

unsigned long long factorial(int n)
{
	unsigned long long result = 1;
	for (int i = 1; i <= n; i++) result *= i;
	return result;
}	





