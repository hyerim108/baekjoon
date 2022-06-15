#include <stdio.h>
int main()
{
    int input,sum=0;
    scanf("%d",&input);
    char arr[input];
    scanf("%s",&arr);
    for(int i =0;i<input;i++){
        sum += arr[i]-'0';
    }
    printf("%d",sum);
}