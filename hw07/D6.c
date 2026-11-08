#include <stdio.h>

void reverse_string();
 
int main()
{
	
	reverse_string();

	return 0;
}

void reverse_string()
{
	char c;
    if ((c=getchar())=='.') return;
    
    reverse_string();
    putchar(c);
 
}








