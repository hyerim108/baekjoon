#include <stdio.h>

int	main()
{
	int	L = 1, P = 1, V = 1, i = 1;
	int	mod, div, result;

	while (1)
	{
		scanf("%d %d %d", &L, &P, &V);
		if (L == 0 || P == 0 || V == 0)
			return (0);
		div = V / P;
		mod = V % P;
		if (mod > L)
			result = div * L + L;
		else
			result = div * L + mod;
		printf("Case %d: %d\n",i++, result);
	}
	return (0);
}
