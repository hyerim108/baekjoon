#include <stdio.h>
int main(){
    int N,j=0,count=0,i=2;
    scanf("%d",&N);
    int result[10000];
    
    while(1){
        // if(N==3) result[j] = N;
        if(N%i==0){
            result[j]=i;
            j++;
            N/=i;
            i=2;
            count++;
        }else i++;
        if(N/i==0) break;
    }
    count++;
    for(int i=0;i<count-1;i++){
        printf("%d\n",result[i]);
    }
}