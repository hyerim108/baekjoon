#include <stdio.h>
long long sum(int *a,int n){
    long long result=0;
    for(int i=0;i<n;i++){
        result += a[i];
    }
    return result;
}
int main()
{
    int a[6] ={1,1,1,1,1,2};
    printf("%d",sum(a,6));
}