#include <stdio.h>
#include <string.h>
void reverse(char arr[]){
    int len = strlen(arr);
    char temp;
    for(int i=0;i<len/2;i++){
        temp = arr[i];
        arr[i] = arr[len-i-1];
        arr[len-i-1] = temp;
    }
}
int main()
{
    char A[10001]= { 0 },B[10001]= { 0 },result[10002]= { 0 };
    scanf("%s %s", &A,&B);
    int len,sum,upper=0;
    reverse(A);
    reverse(B);
    len = strlen(A)>strlen(B) ? strlen(A) : strlen(B);
    for(int i=0;i<len;i++){
       sum = A[i] -'0' + B[i] - '0' + upper;
       while(sum<0) sum+='0';
       if(sum>9) upper = 1;
       else upper =0;
       result[i]=sum %10+'0';
    }
    if(upper ==1) result[len] = '1';
    reverse(result);
    printf("%s",result);
}