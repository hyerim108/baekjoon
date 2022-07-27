#include <stdio.h>

static int	check = 0, N;
int board[15];

int is_valid(int col)
{
	int i = 0;
	while(i < col)
	{
		if (board[i] == board[col])
			return(0);
		else if(board[col] - board[i] == col - i)
			return (0);
		else if(board[i] - board[col] == col - i)
			return (0);
		i++;
	}
	return (1);
}

void dfs(int col)
{
	if (col == N)
		check++;
	else{
		for (int i =0;i<N;i++)
		{
			board[col] = i;
			if (is_valid(col))
				dfs(col+1);
		}
	}
}

int main()
{
	scanf("%d", &N);
	dfs(0);
	printf("%d", check);
}