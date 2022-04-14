#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int compare(const void *a,const void *b){
    int num1 = *(int *)a;
    int num2 = *(int *)b;
    if(num1<num2) return -1;
    else if(num1>num2) return 1;
    return 0;
}
int main(){
    long long x[10000],y[10000];
    int result[100];
    int size;
    scanf("%d",&size);
    for(int i=1;i<=size;i++){
        scanf("%lld %lld",&x[i],&y[i]);
    }
    int t =0;
    for(int i=1;i<size;i++){
        for(int j=i+1;j<=size;j++){
            result[t] = (x[j] - x[i]) + (y[j] -y[i]);
            t++;
        }
    }
    qsort(result,t,sizeof(double),compare);
    for(int i=0;i<t;i++) {
        if(result[i] !=0){
            printf("%d\n",result[i]*result[i]);
            break;
        }
    }
}