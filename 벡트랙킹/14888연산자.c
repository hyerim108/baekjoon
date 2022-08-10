#include <stdio.h>

int x, arr[12];
int mini = 100000001;
int sum=0, max=-100000001;

void dfs(int add, int min, int mul, int div, int cnt, int sum)
{
	if (cnt == x - 1)
	{
		if (max < sum)
			max = sum;
		if (mini > sum)
			mini = sum;
	}
	if(add > 0)
		dfs(add - 1, min, mul , div, cnt + 1, sum + arr[cnt + 1]);
	if(min > 0)
		dfs(add, min - 1, mul , div, cnt + 1, sum - arr[cnt + 1]);
	if(mul > 0)
		dfs(add, min, mul - 1, div, cnt + 1, sum * arr[cnt + 1]);
	if(div > 0)
		dfs(add, min, mul, div - 1, cnt + 1, sum / arr[cnt + 1]);
}

int main()
{
	int n, m;
	int add, min, mul, div;
	scanf("%d", &x);
	for(int i=0;i<x;i++)
		scanf("%d", &arr[i]);
	scanf("%d %d %d %d",&add, &min, &mul, &div);
	dfs(add, min, mul ,div ,0,arr[0]);
	printf("%d\n%d", max, mini);
}