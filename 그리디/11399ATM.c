#include <stdio.h>

int N;
void swap(int *arr)
{
	int i =0, temp,j;
	while (i < N)
	{
		j = i + 1;
		while (j < N)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int main()
{
	int arr[1001] = {0}, result = 0;
	scanf("%d", &N);
	for(int i =0;i< N;i++)
		scanf("%d", &arr[i]);
	swap(arr);
	for(int i = 1; i < N; i++)
		arr[i]+= arr[i-1];
	for(int i= 0; i< N;i++)
		result += arr[i];
	printf("%d\n", result);
}