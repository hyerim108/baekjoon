#include <stdio.h>
int main(){
    int t,a,b;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d %d",&a,&b);
        if(0<a && b <10){
            printf("Case #%d: %d + %d = %d\n",i,a,b,a+b);
        }
    }
}