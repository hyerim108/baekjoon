#include <stdio.h>
int main()
{
    int n,x;
    scanf("%d",&n);
    x=0;
    for(int i =1;i<=n;i++)
        x = x + i;
    printf("%d",x);
}