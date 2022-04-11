#include <stdio.h>
int main(){
    int x1,y1,x2,y2,x3,y3;
    scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
    int D = x1* y2 + x2 * y3 + x3 * y1 - (y1 * x2 + y2 * x3 + y3 * x1);
    if(D==0) printf("0\n");
    else if(D>0) printf("1\n");
    else printf("-1\n"); 
}