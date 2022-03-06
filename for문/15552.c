#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d",&c);
    if (c<=1000000)
    {
        for (int i = 0; i < c; i++)
        {
            scanf("%d %d\n",&a,&b);
            if(a>=1&&a<=1000&&b>=1&&b<=1000)
                printf("%d\n",a+b);
            else
                break;
        }
    }
}