#include <stdio.h>

void arr_input(int arr[], int N);
void arr_output(int arr[], int N);

void rotateRight(int arr[], int N, int step);


int main(int argc, char **argv)
{
	int N = 12;
	int arr[N];
	
	arr_input(arr, N);
	
	rotateRight(arr, N, 4);
	
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


void rotateRight(int arr[], int N, int step)
{
	int tempArr[step];
	for(int i = 1; i <= step; i++) tempArr[step - i] = arr[N-i]; 

	for(int i = N - 1; i >= 0; i--)
	{
		if (i>=step) arr[i] = arr[i - step];
		if (i<step) arr[i] = tempArr[i];
	}

	arr_output(arr, N);
}

