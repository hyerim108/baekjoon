#include <stdio.h>
#include <math.h>
int main()
{
    int input[10],N,max=0,result,maxmum;
    for(int i=0;i<10;i++){
        input[i]=0;
    }
    scanf("%d",&N);
    while(1){
        input[N%10]++;
        if(N/10 == 0) break;
        N /= 10;
    }
    max = (input[6] + input[9] +1)/2;
    for(int i=0;i<10;i++){
        if(i==6 || i==9) continue;
        if(max<=input[i]){
            max=input[i];
        }
    }
    printf("%d\n",max);
}