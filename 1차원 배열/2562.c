#include <stdio.h>
int main()
{
    int n[10],result=0,count=1;
    for (int i=1;i<=9;i++)
    {
        scanf("%d\n",&n[i]);
        if(n[i] > result){
            result = n[i];
            count=i;
        }
    }
    printf("%d\n%d",result,count);
}