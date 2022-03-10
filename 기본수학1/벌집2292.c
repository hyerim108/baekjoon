#include <stdio.h>
int main()
{
    int input,count=1,x=1,i=1; //count 방갯수 x => 시작번호 1
    scanf("%d",&input);
    if(input==1) count=0;
    while(1)
    {
        if(input <= 6*i+x)
        {
            count++;
           break;
        }
        else{
              count++;
            x=6*i+x;
            i++;
        }
        
    }
    printf("%d\n",count);
}