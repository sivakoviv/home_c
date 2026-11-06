#include <stdio.h>

void isEven(int);

int main(int argc, char **argv)
{
	int userInput;
	scanf("%d",&userInput);
	
	isEven(userInput);
		
	return 0;
}

void isEven(int number)
{	
	int sum = 0;
	
	while(number > 0)
	{
		sum += number%10;
		number/=10;
	}
		
	if(sum % 2 == 0) printf("%s","YES");
	else printf("%s","NO");
}
