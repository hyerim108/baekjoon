#include <stdio.h>

int main()
{
	int arr[12], T, n;

	scanf("%d", &T);
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 4;
	for(int i = 0; i < T; i++)
	{
		scanf("%d", &n);
		for (int j = 4;j <= n; j++)
			arr[j] = arr[j - 1] + arr[j - 2] + arr[j - 3];
		printf("%d\n", arr[n]);
	}
}