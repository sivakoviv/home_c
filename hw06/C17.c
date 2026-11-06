 #include <stdio.h>

int is_happy_number(int n);

int main(int argc, char **argv)
{
	int userInput;
	scanf("%d",&userInput);
	
	 
	 if(is_happy_number(userInput) == 1) printf("%s","YES");
	 else printf("%s","NO");
		
	return 0;
}

int is_happy_number(int n)
{	
	int mult = 1;
	int sum = 0;
	
	while (n > 0)
	{
		sum += n%10;
		mult *= n%10;
		n /=10; 
	}
	
	if (sum == mult) return 1;
	else return 0;
}



