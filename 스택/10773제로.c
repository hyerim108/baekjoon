#include <stdio.h>
int main(){
    int input,i,arr[100000],t=-1,result=0;
    scanf("%d",&input);
    while(input--){
        scanf("%d",&i);
        if(i==0) t-=1;
        else {
            t++;
            arr[t]=i;
        }
    }
    for(int i=0;i<=t;i++) result += arr[i];
    printf("%d\n",result);
}