#include <stdio.h>
int main()
{
     int n;
    scanf("%d",&n);
    if (n<=100000){
        for(int i=n;i>0;i--){
            printf("%d\n",i);
        }
    }
}