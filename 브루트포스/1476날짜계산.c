#include <stdio.h>

int main()
{
	int E, S, M, year = 1;
	scanf("%d %d %d", &E, &S, &M);
	while(1)
	{
		if ((year - E) % 15 == 0 && (year - S) % 28 == 0 && (year - M) % 19 == 0)
		{ 
			printf("%d\n", year);
			return (0);
		}
		year++;
	}
}