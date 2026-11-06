#include <stdio.h>

 int digit_to_num(char c);

int main(int argc, char **argv)
{
	char c;
	int sum = 0;
	
	while( (c=getchar())!='.')
	{
		if(digit_to_num(c)) sum += digit_to_num(c);
	}
	
	printf("%d", sum);
	return 0;
}

 int digit_to_num(char c)
{	
	if (c>='0' && c<='9') return c - '0';
	return 0;
}
