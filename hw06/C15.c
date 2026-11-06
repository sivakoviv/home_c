 #include <stdio.h>

int grow_up(int n);

int main(int argc, char **argv)
{
	int userInput;
	scanf("%d",&userInput);
	
	grow_up(userInput);
		
	return 0;
}

 int grow_up(int n)
{	
	
	if (n == 0) 
	{
        printf("%s", "YES");
        return 0;
    }
	
	int current_digit;
	int next_dight;
	
	while (n > 0)
	{
		current_digit = n % 10;
		n /=10;
		next_dight = n % 10;
		
		if(next_dight >= current_digit)
		{
			printf("%s","NO");
			return 0;
		}
		if(n == 0)
		{ 
			printf("%s","YES");
			return 0;
		}	
	}
}

