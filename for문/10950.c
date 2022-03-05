#include <stdio.h>
int main()
{
    int count,n,m;
    scanf("%d\n",&count);
    for(int i=0;i<count;i++){
        scanf("%d %d\n",&n,&m);
        printf("%d\n", n+m);
    }
}