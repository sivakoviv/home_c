#include <stdio.h>

void print_number(int n);
 
int main()
{
	int n;
	scanf("%d", &n); 
	print_number(n);
	return 0;
}

void print_number (int n)
{
    if (n < 1)	return;
    //printf("%d ", n);
    print_number(n - 1);
    printf("%d ", n);
}


