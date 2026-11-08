#include <stdio.h>

void print_number(int n);
 
int main()
{
	int n;
	scanf("%d", &n); 
	if (n < 0) return 0;
	//if (n == 0)  printf("%d ", n);
	
	print_number(n);
	return 0;
}

void print_number (int n)
{
	
    if (n < 10)
    {	
		printf("%d ", n);
		return;
    }
    
    print_number(n / 10);
    
    printf("%d ", n%10);
    

}







