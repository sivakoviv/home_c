#include <stdio.h>

void arr_input(int arr[], int N);
void arr_output(int arr[], int N);

int findSumMax(int arr[], int N);

int main(int argc, char **argv)
{
	int N = 10;
	int arr[N];
	
	arr_input(arr, N);
	
	printf("%d", findSumMax(arr, N));
	
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



int findSumMax(int arr[], int N)
{
	int arrMax[2] = {arr[0], arr[1]};
	if(arr[0] > arr[1])
	{
	 arrMax[0] = arr[1];
	 arrMax[1] = arr[0];
	}

	
	for(int i = 0; i < N; i++)
	{
		if(arrMax[0]<arr[i])
		{
			arrMax[1] = arrMax[0];
			arrMax[0] = arr[i];
		 }
		 else if (arrMax[1] < arr[i]) arrMax[1] = arr[i];
	}
	
	return arrMax[0] + arrMax[1];
}


