#include <stdio.h>
int main()
{
    int x=1,y=1;
    while(1)
    {
        scanf("%d %d", &x, &y);
        if (x == 0 && y== 0) break;
        printf("%d\n", x+y);
    }
}