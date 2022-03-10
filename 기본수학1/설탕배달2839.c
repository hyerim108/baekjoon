#include <stdio.h>
int main()
{
    int input,num,count=0,c=0;
    scanf("%d",&input);
    num = input;
    if(input>=3 && input <= 5000){
        while(num>0){
            if(num%5==0) {
                num-=5;
                count++;
            }
            else if(num%3==0) {
                num-=3;
                count++;
            }
            else if(num>5){
                num-=5;
                count++;
            }
            else 
            {
                count=-1;
                break;
            }
        }
        printf("%d\n",count);
    }
}
