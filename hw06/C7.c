#include <stdio.h>

int convert_base(int, int);
int power(int, int); 
 
int main()
{
	int n, p;
	if(scanf("%d %d", &n, &p) != 2 || p > 9 || p < 2 || n < 0) return 1;
	printf("%d", convert_base(n, p));
	return 0;
}

int convert_base(int n, int p)
{
	int result = 0;
	int remainder = 0; 
	int exp = 0;
	
	while (n != 0)
	{
		remainder = n % p; //остаток
		result += power(10, exp) * remainder;

		n /= p; //целое(для след итерации)
		exp++;
	}
	
	return result;
}

int power(int base, int exp)
{
		int result = 1;
		for (int i = 0; i < exp; i++) result *= base;
		return result;
}	

	


