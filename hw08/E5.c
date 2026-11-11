#include <stdio.h>

void arr_input(int arr[], int N);
void arr_output(int arr[], int N);

int sumPositive(int arr[], int N);

int main(int argc, char **argv)
{
	int N = 10;
	int arr[N];
	
	arr_input(arr, N);
	
	printf("%d", sumPositive(arr, N));
	
	return 0;
}

void arr_input(int arr[], int N)
{
	for(int i = 0; i < N; i++) scanf("%d", &arr[i]);
}

void arr_output(int arr[], int N)
{
	for(int i = 0; i < N; i++) printf("%d ", arr[i]);
}



int sumPositive(int arr[], int N)
{
	
	int sum = 0;
		
	for(int i = 0; i < N; i++)
	{
		if(arr[i]>0) sum+=arr[i];	
	}
	
	return sum;
}
