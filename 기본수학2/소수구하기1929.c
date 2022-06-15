#include <stdio.h>
int main()
{
    int N,M,a[100001];
    scanf("%d %d",&N,&M);
    for(int i =N;i<=M;i++){
        a[i]=i;
    }
    for(int i=2;i<=M;i++){
        for(int j=2;j*i<=M;j++){
            a[i*j] =1;
        }
    }
    for(int i =N;i<=M;i++){
        if(a[i] != 1) {
            printf("%d\n",i);
        }
    }
}