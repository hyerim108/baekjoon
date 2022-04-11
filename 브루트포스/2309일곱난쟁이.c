#include <stdio.h>
#include <stdlib.h>
int compare(const void *a,const void *b){
    int num1= *(int *)a;
    int num2= *(int *)b;
    if(num1<num2) return -1;
    else if(num2<num1) return 1;
    return 0;
}
int main(){
    int arr[9],sum=0;
    for(int i=0;i<9;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<9;i++){
        sum+=arr[i];
    }
    int over = sum-100;
    int find =0;
    for(int i=0;i<8;i++){
        for(int j=i+1;j<9;j++){
            if(over == arr[i]+arr[j]) {
                arr[i]=0;
                arr[j]=0;
                find =1;
                break;
            }
        }
        if(find) break;
    }
    qsort(arr,9,sizeof(int),compare);
    for(int i=2;i<9;i++){
        printf("%d\n",arr[i]);
    }
}