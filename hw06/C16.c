 #include <stdio.h>

 int is_prime(int n);

int main(int argc, char **argv)
{
	int userInput;
	scanf("%d",&userInput);
	
	 
	 if(is_prime(userInput) == 1) printf("%s","YES");
	 else printf("%s","NO");
		
	return 0;
}

  int is_prime(int n)
{	
	
	if (n <= 1)	return 0;
	
	for (int i = 2; i*i <= n; i++)
	{
		if(n % i == 0)	return 0;
	}
	
	return 1;
}


