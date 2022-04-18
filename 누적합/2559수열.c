#include <stdio.h>
int main(){
    int N,K,sum=0,max =0,arr[100001];
    scanf("%d %d",&N,&K);
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<K;i++){
        sum+=arr[i];
    }
    max = sum;
    for(int i=0;i<N-K;i++){
        sum -=arr[i];
        sum += arr[i+K];
        if(sum>max) max=sum;
    }
    printf("%d\n",max);
}