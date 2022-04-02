#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int gdb(int a,int b){
    return a%b? gdb(b,a%b) : b;
}
int compare(const void *a, const void *b) 
{
    int num1 = *(int *)a;
    int num2 = *(int *)b;
 
    if (num1 < num2)
        return -1;
    if (num1 > num2)
        return 1;
    return 0;
}
int main()
{
    int size,arr[1000],minus[1000],MAX,result[1000];
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    qsort(arr,size,sizeof(int),compare); //차례대로 정렬해주기
    //근접한 친구들의 차이값 구하기
    
    MAX = arr[1]-arr[0];
    for(int i=2;i<size;i++) {
        MAX = gdb(MAX,arr[i]-arr[i-1]);
    }
    int p=0;
    for(int i=1;i*i<=MAX;i++){
        if(MAX%i==0){
            result[p++] = i;
            if (i != MAX / i) result[p++]=MAX/i;
        }
    }
    qsort(result,p,sizeof(int),compare);
    for(int i=0;i<p;i++){
        if(result[i]!=1) printf("%d ",result[i]);
    }
}