#include <stdio.h>

int N,M, arr[8], visited[8], str[8];

int com(const void *a, const void *b)
{
	int num1 = *(int *)a;
	int num2 = *(int *)b;

	if (num1 > num2)
		return 1;
	if (num1 < num2)
		return -1;
	return 0;
}

void dfs(int cnt, int index)
{
	if (cnt == M)
	{
		for(int i=0;i< M;i++) printf("%d ", str[i]);
		printf("\n");
		return ;
	}
	for(int i=0;i< N;i++)
	{
		if(index <= i)
		{
			str[cnt] = arr[i];
			dfs(cnt + 1, i);
		}
	}
}

int main()
{
	scanf("%d %d", &N, &M);
	for (int i=0;i< N;i++)
		scanf("%d", &arr[i]);
	qsort(arr, N, sizeof(int), com);
	dfs(0, -1);
}