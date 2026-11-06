#include <stdio.h>

void print_simple(int n);
 
int main()
{
	int n;
	if(scanf("%d", &n) != 1 || n <=0 ) return 1; //успешно ли считано? 
	print_simple(n);
	return 0;
	
}

void print_simple(int n)
{
	int divisor = 2;
	while (n != 1)
	{
		if (n % divisor == 0)
		{
			 n /= divisor;
			 printf("%d ", divisor);
		} 
		else divisor++;
	}

}	
