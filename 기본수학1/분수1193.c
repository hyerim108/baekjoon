#include <stdio.h>
int main()
{
    int input,i=0,n=0,n2=0;
    int B=1,num=0;
    scanf("%d",&input);
    while(1){
        if(input <= i) break;
        else{
            n=n+1;
            i += n;
        }
    }
    for(int j=1;j<n;j++) n2+=j;
    n2+=1;
    if(n%2 == 0){
        while(1){
            if(input==n2+num) {
                printf("%d/%d\n",B+num,n-num);
                break;
            }
            num++;
        }
    }else if(n%2 != 0){
         while(1){
            if(input==n2+num) {
                printf("%d/%d\n",n-num,B+num);
                break;
            }
            num++;
        }
    }
}