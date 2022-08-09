#include <stdio.h>

int x, y, width, height,visited[601][601],count =0;
char campus[601][601];

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

void dfs(int a, int b)
{
	visited[a][b] = 1;
	if (campus[a][b] == 'P') count++;
	for(int i=0;i<4;i++)
	{
		int na = a + dx[i];
		int nb = b + dy[i];
		if(na >= 0 && nb >=0 && na < x && nb < y && !visited[na][nb])
		{
			if(campus[na][nb] != 'X')
				dfs(na, nb);
		}
	}
}

int main()
{
	scanf("%d %d", &x, &y);
	char str[600];
	for(int i=0;i<x;i++)
	{
		scanf("%s", str);
		for(int j=0;str[j] != 0;j++)
		{
			campus[i][j]= str[j];
			if (campus[i][j] == 'I')
			{
				width = i;
				height = j;
			}
		}
	}
	dfs(width, height);
	if (count == 0)
	{
		printf("TT");
		return (0);
	}
	printf("%d", count);
}