#include <stdio.h>

void arr_input(int arr[], int N);
float average(int arr[], int N);
int findMin(int arr[], int N);

int main(int argc, char **argv)
{
	int N = 5;
	int arr[N];
	
	arr_input(arr, N);
	printf("%d ", findMin(arr, N));
	return 0;
}

void arr_input(int arr[], int N)
{
	for(int i = 0; i < N; i++) scanf("%d", &arr[i]);
}
float average(int arr[], int N)
{
	float sum = 0;
	for(int i = 0; i < N; i++)
	{
		sum+=arr[i];
	}
	
	return sum/N;
}

int findMin(int arr[], int N)
{
	int min = arr[0];
	for(int i = 1; i < N; i++)
	{
		if(min>arr[i]) min = arr[i];
	}
	
	return min;
}
