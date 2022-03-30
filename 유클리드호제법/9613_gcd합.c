#include <stdio.h>
int gcd(int a,int b){
    if(a%b==0) return b;
    else gcd(b,a%b);
}
int main(){
    int N,M,arr[100];
    long long int result;
    scanf("%d", &N);
    for(int i=0;i<N;i++){
        result=0;
        scanf("%d",&M);
        for(int j=0;j<M;j++){
            scanf("%d",&arr[j]);
        }
        for(int j=0;j<M;j++){
            for(int x = j+1;x<M;x++){
                result += gcd(arr[j],arr[x]);
            }
        }
        printf("%lld\n", result);
    }
}