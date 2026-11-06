#include <stdio.h>

unsigned long long grain_count(int n);
 
int main()
{
	int n;
	if(scanf("%d", &n) != 1 || n > 64 || n <=0 ) return 1; //успешно ли считано? 
	printf("%llu", grain_count(n));
	return 0;
	
}

unsigned long long grain_count(int n)
{
	unsigned long long result = 1;
	for (int i = 0; i < n - 1; i++) result *= 2;
	return result;
}	




