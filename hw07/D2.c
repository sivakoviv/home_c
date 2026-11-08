#include <stdio.h>

int sum_number(int n);
 
int main()
{
	int n;
	scanf("%d", &n); 
	printf( "%d", sum_number(n));
	return 0;
}

int sum_number (int n)
{
	
    if (n <= 1)	return n;
    
    return n + sum_number(n - 1);
}






