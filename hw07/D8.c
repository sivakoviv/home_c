#include <stdio.h>

void print_number(int a, int b);
 
int main()
{
	int a,  b;
	scanf("%d %d", &a, &b); 

	print_number(a, b);
	return 0;
}

void print_number (int a, int b)
{
	
    if (a == b)
    {
		printf("%d ", a);
		return;
	}
    
    
    printf("%d ", a);
    
    if(a<b) print_number(a+1, b);
    if(a>b) print_number(a-1, b);
    

}







