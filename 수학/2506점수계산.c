#include <stdio.h>
int main(){
    int N,arr[100],result=0;
    scanf("%d",&N);
    for(int i =0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int p=0;
    for(int i =0;i<N;i++){
        if(arr[i] == 0) p=0;
        else if(arr[i] ==1){
            p++;
            result+=p; 
        }
    }
    printf("%d\n",result);
}