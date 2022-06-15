#include <stdio.h>
#include <math.h>
int isPrime(int n){
    int root = sqrt(n);
    for(int i=3;i<=root;i+=2){
        if(n%i==0) return 1;
    }
    return 0;
}
int main(){
    int N;
    while(1){
        scanf("%d",&N);
        if(N==0) break;
        int n = N/2;
        int a,b;
        for(int i =3;i<=N;i+=2){
            a = i;
            b = N-i;
            if(i==N || N<=4) {
                printf("Goldbach's conjecture is wrong.\n");
                break;
            }
            if(!isPrime(a) && !isPrime(b)){
                printf("%d = %d + %d\n",N,a,b);
                break;
            }
        }
    }
}