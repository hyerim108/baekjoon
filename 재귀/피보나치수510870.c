#include <stdio.h>
int pibona(int n){
    if(n==0|| n==1) return n;
    return (pibona(n-1) + pibona(n-2));
}
int main()
{
    int N;
    scanf("%d",&N);
    printf("%d\n",pibona(N));
}