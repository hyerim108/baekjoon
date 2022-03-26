#include <stdio.h>
int isPrime(int N){
    for(int i=2;i<N;i++){
        if(N%i==0) return 1;
    }
    return 0;
}
int main()
{
    int size,input;
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        scanf("%d",&input);
        int n=input/2,a,b;
        for(int i=n;i>=2;i--){
            a= i;
            b= input-i;
            if(!isPrime(a) && !isPrime(b)){
                printf("%d %d\n",a,b);
                break;
            }
        }
    }
}