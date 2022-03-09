#include <stdio.h>
int swap(int n)
{
    int result;
    result =(n%10*100)+ (n/10%10)*10 +(n/100);
    return result;
}
int main()
{
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    num1 = swap(num1);
    num2 = swap(num2);
    if(num1>num2) printf("%d\n",num1);
    else printf("%d\n",num2);
}