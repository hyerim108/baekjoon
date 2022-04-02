#include <stdio.h>
int main(){
    int input,N,t=0,j=0;
    scanf("%d",&input);
    for(int i=0;i<input;i++){
        scanf("%d",&N);
        if(N==1) t++;
        else if(N==0) j++;
    }
    if(t>j) printf("Junhee is cute!");
    else printf("Junhee is not cute!");
}