#include <stdio.h>

void arr_input(int arr[], int N);
void arr_output(int arr[], int N);

void findMin(int arr[], int N);
void findMax(int arr[], int N);

int main(int argc, char **argv)
{
	int N = 10;
	int arr[N];
	
	arr_input(arr, N);
	
	findMax(arr, N);
	findMin(arr, N);
	
	
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

void findMin(int arr[], int N)
{
	int arrMin[2] = {1, arr[0]}; //заполним массив первым элементом (индекс, элемент)
	
	for(int i = 0; i < N; i++)
	{
		if(arrMin[1]>arr[i])
		{
			 arrMin[1] = arr[i];
			 arrMin[0] = i+1;
		 }
	}

	arr_output(arrMin, 2);
}

void findMax(int arr[], int N)
{
	int arrMax[2] = {1, arr[0]};;
	
	for(int i = 0; i < N; i++)
	{
		if(arrMax[1]<arr[i])
		{
			 arrMax[1] = arr[i];
			 arrMax[0] = i+1;
		 }
	}

	arr_output(arrMax, 2);
}

