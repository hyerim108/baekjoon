#include <stdio.h>
#include <string.h>
//배열을 정렬하는 것은 쉽다. 수가 주어지면, 그 수의 각 자리수를 내림차순으로 정렬해보자.
//첫째 줄에 정렬하려고 하는 수 N이 주어진다. N은 1,000,000,000보다 작거나 같은 자연수이다.
int main()
{
    char input[1000];
    gets(input); //통째로받아서
    int len = strlen(input);
    int i,j;
    while(i<len){
        j=0;
        while(j<len-1){
            if(input[j] < input[j+1]){
                int temp = input[j+1];
                input[j+1] = input[j];
                input[j]=temp;
            }
            j++;
        }
        i++;
    }//선택정렬로 바꾸고
    puts(input); //통째로 출력해버리기!!
}