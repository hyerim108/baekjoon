#include <stdio.h>
int pibonacci(int n){
    if(n==0||n==1) return n;
    return(pibonacci(n-1) + pibonacci(n-2));
}
int main(){
    int N,result;
    scanf("%d",&N);
    if(N<=45)
    {
        result = pibonacci(N);
        printf("%d\n",result);
    }
}