#include <stdio.h>

int main()
{
	char c;
	int Number=0;
	//спец символ новой строки
	while( (c=getchar())!='\n')
		if(c>='0' && c<='9')
			Number = Number*10+c-'0';
		printf("%d",Number);
	return 0;
}
