#include <stdio.h>
int main()
{
    int N,M,count,a[10000],result=0,min;
    scanf("%d %d",&N,&M);
    int j=0;
    while(N <= M){
        count=0;
        for(int i=1;i<=N;i++){
            if(N%i==0) count++;
        }
        if(count==2) 
        {
            a[j]=N;
            j++;
        }
        N++;
    }
    for(int i=0;i<j;i++){
        if(a[i] != 0) {
            min = a[i];
            break;
        }
    }
    for(int i=0;i<j;i++){
        result+=a[i];
    }
    if(result==0){
        printf("%d\n",-1);
    }else{
        printf("%d\n",result);
        printf("%d\n",min);
    }   
}