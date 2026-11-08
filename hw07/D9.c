#include <stdio.h>

int sum_digits(int n);
 
int main()
{
	int n;
	scanf("%d", &n); 
	if (n < 0) return 0;
	//if (n == 0)  printf("%d ", n);
	
	printf("%d ", sum_digits(n));
	
	return 0;
}

int sum_digits(int n)
{
	
    if (n < 10)
    {	
		return n;
    }
    
	return sum_digits(n / 10) + n%10;
    
    
    

}







