#include <stdio.h>
int main()
{
    int N=1,M=250000,count=0,rcnt=0,a[250000];
    for(int i=2;i<=M;i++){
        for(int j=2;j*i<=M;j++){
            a[i*j] =1;
        }
    }
    while(N!=0){
        scanf("%d",&N);
        if(N==0) break;
        for(int i=N+1;i<=N*2;i++){
            if(a[i]==0) rcnt++;
        }
        printf("%d\n",rcnt);
        rcnt=0;
    }
}