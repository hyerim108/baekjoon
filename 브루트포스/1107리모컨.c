#include <stdio.h>
#include <string.h>
int main()
{
    int N;
    int M,arr[9],t,a=0,mod[500000];
    for(int i=0;i<10;i++){
        arr[i] = 1;
    }
    scanf("%d %d",&N,&M);
    int title=N;
    while(1){
        if(N/10==0) break;
        mod[a] = N%10;
        a++;
        N/=10;
    }
    if(M!=0){
        for(int i=0;i<M;i++){
        scanf("%d",&t);
        arr[t] = 0;
        }   
    }
    if(M==0) printf("%d\n",a+1);
    else if(N==100) printf("0");
    else{
        for(int i=0;i<a+1;i++){
            for(int j=0;j<10;j++){
                
            }
        }
    }
}