#include <stdio.h>

int nod(int a, int b);

int main(int argc, char **argv)
{
	int userInput_a;
	int userInput_b;
	
	scanf("%d %d",&userInput_a, &userInput_b);
	
	printf("%d",nod(userInput_a, userInput_b));
	
	return 0;
}

int nod(int a, int b)
{
	int rem = 1;
	
	while(rem!=0)//алгоритм Евклида
	{
	rem = a%b;
	a = b;
	b = rem;
	}
	return a;
}
