#include <stdio.h>
int main()
{
    int x,n,a;
    scanf("%d %d",&x,&n);
    for(int i=0;i<x;i++){
        scanf("%d",&a);
        if(n>a)
            printf("%d ",a);
    }
}