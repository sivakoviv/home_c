 #include <stdio.h>

int is_digit(char c);

int main(int argc, char **argv)
{
	char c;
	int i = 0;
	
	while( (c=getchar())!='.')
	{
		if(is_digit(c)) i++;
	}
	
	printf("%d", i);
	return 0;
}

int is_digit(char c)
{	
	return c>='0' && c<='9';
}




