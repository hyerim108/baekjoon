#include <stdio.h>

int main(void)
{
    int a,b,c;
    scanf("%d %d", &a, &b);

    printf("%d\n",a*(b%10));
    printf("%d\n",a*(b%100/10));
    printf("%d\n",a*(b/100));
    c= (a*(b%10)) + (a*(b%100/10))*10 + (a*(b/100))*100;
    printf("%d\n",c);
}