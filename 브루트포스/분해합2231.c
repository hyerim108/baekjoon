#include <stdio.h>
int main()
{
    int input,count=0,p=0,tmp,sum;
    scanf("%d",&input);
    int N= input;
    while(1){
        N=N/10;
        count++;
        if(N == 0) break;
    }
    for(int i = input-9*count;i<input;i++){
        tmp = i;
        sum = i;
        while(tmp>0){
            sum+=tmp%10;
            tmp /=10;
        }
        if(sum == input) {
            p=i;
            break;
        }
    }
    if(p!=0) printf("%d\n",p);
    else printf("0\n");
}