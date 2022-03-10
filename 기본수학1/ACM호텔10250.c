#include <stdio.h>
int main()
{
    int count,H,W,N;
    scanf("%d",&count);
    int a=0,c=0;
    while(count--){
        scanf("%d %d %d", &H,&W,&N);
        if (N%H==0) printf("%d%02d\n",H,N/H);
        else printf("%d%02d\n",N%H,N/H + 1);
    }
}