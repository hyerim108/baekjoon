#include <stdio.h>
int N, M, arr[8],visited[8];
int copy[8];
int compare(const void *a, const void *b)
{
	int num1 = *(int *)a;
	int num2 = *(int *)b;

	if (num1< num2)
		return -1;
	if (num1 > num2)
		return 1;
	return 0;
}

void dfs(int cnt)
{
	if (cnt == M)
	{
		for(int i=0;i<M;i++)
			printf("%d ", copy[i]);
		printf("\n");
		return ;
	}
	for(int i=0;i<N;i++)
	{
		if (visited[i]) continue;
		visited[i] = 1;
		copy[cnt] = arr[i];
		dfs(cnt + 1);
		visited[i] = 0;
	}
}

int main()
{
	scanf("%d %d", &N, &M);
	for(int i=0;i < N; i++)
	{
		scanf("%d", &arr[i]);
	}
	qsort(arr, N, sizeof(int), compare);
	dfs(0);
}