#include <stdio.h>
long long a[1000001];
int main()
{
    long long N,M,max;
    int count=0;
    scanf("%lld %lld",&N,&M);
    for(long long i=2;i*i<=M;i++){
        long long n = N/ (i*i);
        if(n%(i*i)) n++;
        while(n*i*i<=M) {
            a[n*i*i] = 1;
            n++;
        }
    }
    for(int i =0;i<=M-N;i++){
        if(a[i] == 0) {
            count++;
        }
    }
    printf("%d\n",count);
}