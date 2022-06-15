#include <stdio.h>
int main(){
    int result=0,N=0;
    for(int i=0;i<5;i++){
        scanf("%d",&N);
        if(N<40) N=40;
        result+=N;
    }
    printf("%d\n",result/5);
}