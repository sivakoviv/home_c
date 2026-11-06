#include <stdio.h>

int power(int, int); 
 
int main()
{
	int n, p;
	scanf("%d %d", &n, &p); 
	
	if(n > 1000 || n < -1000 || p < 0)
	{
		printf("error\n");
		return 1;
	}
	
	printf("%d", power(n, p));
	return 0;
}

int power(int n, int p)
{
		int result = 1;
		for (int i = 0; i < p; i++) result *= n;
		return result;
}	

