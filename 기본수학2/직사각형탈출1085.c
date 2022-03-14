#include <stdio.h>
int main()
{
    int x,y,w,h,result;
    scanf("%d %d %d %d",&x,&y,&w,&h);
    w = w-x;
    h = h-y;
    result = x;
    if(result>h) result = h;
    if(result > w) result = w;
    if(result > y) result=y;
    printf("%d\n",result);
}