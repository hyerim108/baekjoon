#include <stdio.h>
#include <stdlib.h>
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
int main(){
    int input[10000];
    for(int i=0;i<7;i++){
        scanf("%d",&input[i]);
    }
    qsort(input,7,sizeof(int),compare);
    int arr[100],p=0;
    for(int i=0;i<7;i++){
        if(input[i] % 2 != 0) arr[p++] = input[i];
    }
    if(p==0){
        printf("-1");
    }else{
        int sum=0;
        for(int i=0;i<p;i++){
            sum+=arr[i];
        }
        printf("%d\n",sum);
        printf("%d\n",arr[0]);
    }
}
