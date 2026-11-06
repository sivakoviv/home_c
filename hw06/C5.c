#include <stdio.h>

int sum(int n);
 
int main()
{
	int n;
	if(scanf("%d", &n) == 1); //успешно ли считано? 
	printf("%d", sum(n));
	return 0;
	
}

int sum(int n)//или n*(n+1)/2 Гаусса
{
	int sum_i = 0;
	for(int i = 1; i<=n; i++) sum_i+=i;
	
	return sum_i;
}	



