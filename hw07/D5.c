#include <stdio.h>

int toBinary(int n);
 
int main()
{
	int n;
	scanf("%d", &n); 
	
	if (n < 0) return 0;
	
	printf("%d ", toBinary(n));

	return 0;
}

int toBinary(int n)
{
	
    if (n <= 1)	return n;
    
    return n%2 + 10*toBinary(n/2);

}







