 #include <stdio.h>

 int count_brackets(char c);

int main(int argc, char **argv)
{
	char c;
	int sum = 0;
	
	int is_corrupted = 0;
	
	while( (c=getchar())!='.')
	{
		sum += count_brackets(c);
		
		if (sum < 0) {
            is_corrupted = 1; 
        }
	}
	
	if(sum == 0 && is_corrupted == 0) printf("%s", "YES");
	else printf("%s", "NO");
	return 0;
}

 int count_brackets(char c)
{	
	if (c==')') return -1;
	if (c =='(') return 1;
	return 0;
}






