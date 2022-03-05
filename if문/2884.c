#include <stdio.h>

int main(void)
{
    int h,m;
    scanf("%d %d", &h,&m);

    if(m>=45)
        printf("%d %d",h,m-45);
    else if (m<45 && h >0)
        printf("%d %d",h-1,(m-45)+60);
    else if(m<45 && h==0)
        printf("%d %d",h+23,m-45+60);
}