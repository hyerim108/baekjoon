#include <stdio.h>
void hansu(int n){
    int count=0,num=99;
    if(n<100){
        count = n;
    }
    else{
        num =99;
        for(int i=100;i<=n;i++){
            if(((i%10)-(i/10%10))==((i/10%10)-(i/100)))
                num++;
        }
        count =num;
    }
    printf("%d\n",count);
}
int main()
{
    int n;
    scanf("%d",&n);
    hansu(n);
}