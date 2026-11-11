#include <stdio.h>

void arr_input(int arr[], int N);
void arr_output(int arr[], int N);

void reverseFunc(int arr[], int N);

int main(int argc, char **argv)
{
	int N = 10;
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
		
	for(int i = 0; i < N; i++)
	{
		if (i < (1+N/2)/2)// условие остановки реверса в первой половине
		{ 
			temp = arr[i];
			arr[i] = arr[N/2 - i - 1];
			arr[N/2 - i - 1] = temp;
		}
		if (i > N/2 - 1 && i < (N/2 + (1+N/2)/2 - 1)) //условие остановки реверса во второй половине
		{ 
			temp = arr[i];
			arr[i] = arr[N/2 + N - i - 1];
			arr[N/2 + N - i - 1] = temp;
		}
	} 
	
	arr_output(arr, N);
}




