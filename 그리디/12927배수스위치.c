#include <stdio.h>
#include <string.h>

int	main()
{
	char	arr[1000] = { 0 };
	int		len;
	int		count;

	count = 0;
	scanf("%s", arr);
	len = strlen(arr);
	for (int i = 0; i < len; i++)
	{
		if (arr[i] == 'Y')
		{
			for (int j = i; j < len; j += i + 1)
			{
				if (arr[j] == 'Y')
					arr[j] = 'N';
				else
					arr[j] = 'Y';
			}
			count++;
		}
	}
	printf("%d", count);
	return 0;
}