#include <stdio.h>
int main()
{
    int a,b,c,d=-1,input,result,count=0;
    scanf("%d",&input);
    result = input;
    while (d != result)
    {
        a = input / 10; //몫
        b = input % 10; //나머지
        c = (a+b) %10; //a+b의 나머지
        d = (b*10) + c; //b를 10의 자리수로 만들고 c 더하기
        input = d;
        count++;
    }
    printf("%d",count);
}