#include <stdio.h>

char toUppercase(char);

int main()
{
	char c;
	while( (c=getchar())!='.') putchar(toUppercase(c));
	return 0;
}

char toUppercase(char c)
{
	if(c>='a' && c<='z') return 'A' + (c-'a'); //все символы лежат подряд ‘a’=97, ‘b’=98,...
	else return c;
}
