#include <stdio.h>

void arr_input(int arr[], int N);
void arr_output(int arr[], int N);

void rotateRight(int arr[], int N);


int main(int argc, char **argv)
{
	int N = 10;
	int arr[N];
	
	arr_input(arr, N);
	
	rotateRight(arr, N);
	
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


void rotateRight(int arr[], int N)
{
	int temp = arr[0];
	arr[0] = arr[N - 1]; 

	for(int i = N - 1; i >= 1; i--)
	{
		arr[i] = arr[i - 1];
		if (i == 1) arr[i] = temp;
	} 
	
	arr_output(arr, N);
}








