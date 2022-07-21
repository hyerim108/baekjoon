#include <stdio.h>

char	arr[101][101];
int		count = -1;
char	visited[101];

void	dfs(int n, int start)
{
	visited[start] = 1;
	count++;
	for(int i=1;i<=n;i++){
		if (visited[i] == 1)
			continue ;
		if (arr[start][i] == 0)
			continue ;
		dfs(n, i);
	}
}

int	main()
{
	int	n, com;

	scanf("%d", &n);
	scanf("%d", &com);
	for (int i =0;i<com;i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		arr[a][b] = 1;
		arr[b][a] = 1;
	}
	dfs(n, 1);
	printf("%d", count);
}