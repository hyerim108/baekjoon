#include <stdio.h>
int main()
{
    int N,min=1000001,max=-1000001;
    scanf("%d",&N);
    int x;
    for(int i=1;i<=N;i++)
    {
        scanf("%d ",&x);
        if(x>max)
            max = x;
        if(x<min)
            min = x;
    }
    printf("%d %d",min,max);
}