#include <stdio.h>

void arr_input(int arr[], int N);
void arr_output(int arr[], int N);

float calcAverage(int arr[], int N);

int main(int argc, char **argv)
{
	int N = 12;
	int arr[N];
	
	arr_input(arr, N);
	
	printf("%.2f ", calcAverage(arr, N));
	
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



float calcAverage(int arr[], int N)
{
	
	float sum = 0;
		
	for(int i = 0; i < N; i++)
	{
		sum+=arr[i];	
	}
	
	return sum/N;
}



