#include <stdio.h>
#include <string.h>

int	main()
{
	char	arr[2501],compare[51];
	int		i = 0, x= 0, count = 0,temp = 0;
	gets(arr);
	gets(compare);
	while (i < strlen(arr))
	{
		if(arr[i++] != compare[x++])	{
			x = 0;
			temp++;
			i = temp;
		}
		else if(x == strlen(compare)){
			count++;
			x = 0;
			temp = i;
		}
	}
	printf("%d", count);
	return (0);
}
