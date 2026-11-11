#include <stdio.h>

void arr_input(int arr[], int N);
void arr_output(int arr[], int N);

void reverseFunc(int arr[], int N);

int main(int argc, char **argv)
{
	int N = 12;
	int arr[N];
	
	arr_input(arr, N);
	
	reverseFunc(arr, N);
	
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



void reverseFunc(int arr[], int N)
{
	
	int temp = 0;
	int third = N/3;
		
	for(int i = 0; i < N; i+=third)
	{
		for(int j = 0; j < third/2; j++)
		{
			temp = arr[i + j];
			arr[i + j] = arr[i + third - j - 1];
			arr[i - j + third - 1] = temp;  
		}
	} 
	
	arr_output(arr, N);
}





