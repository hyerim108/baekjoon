#include <stdio.h>
#include <math.h>
int main()
{
    int C,x1,x2,y1,y2,r1,r2,result;
    double d,s;
    scanf("%d", &C);
    for(int i=0;i<C;i++){
        scanf("%d %d %d %d %d %d",&x1,&y1,&r1,&x2,&y2,&r2);
        d= sqrt(pow(x2-x1,2) + pow(y2-y1,2));
        s = r1>r2 ? r1-r2: r2-r1;
        if(d==0 && r1==r2) result = -1; //두원이 완전히 겹칠때
        else if(r1+r2>d && s <d) result = 2; //두원이 내접한 경우
        else if(r1+r2 == d || s ==d) result = 1; //두 원이 외접한 경우 
        else result = 0; //겹치는게 없을때

        printf("%d\n",result);
    }
}