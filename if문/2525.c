#include <stdio.h>

int main(void)
{
    int h,m,x,a;
    scanf("%d %d %d",&h,&m,&x);

    if(m+x < 60)
        printf("%d %d", h, m+x);
    else{
        a = h+((m+x)/60);
        if (a >=24)
            printf("%d %d",a%24,(m+x)%60);
        else
            printf("%d %d",h+((m+x)/60),(m+x)%60);
    }
}