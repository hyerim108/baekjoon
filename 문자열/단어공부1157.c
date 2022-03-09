#include <stdio.h>
#include <string.h>
int check(int *arr,int a){
    int i=0,count=0;
    while(i<26){
        if(arr[i] == a && a != 0)
            count++;
        i++;
    }
    if(count>1) return 1;
    return 0;
}
int main()
{
    char str[1000000];
    int arr[26];
    scanf("%s",&str);
    int count=0;

    for(int i=0;i<26;i++)
        arr[i]=0;

    for(int i=97;i<=122;i++){  
        count=0;
        for(int j=0;j<strlen(str);j++){
            if(str[j] == i ||str[j] ==i-32){
                count++;
                arr[i-97]=count;
            }
        }
    }
    int temp=0; char len;
    for(int i=0;i<26;i++){
        if(arr[i]>temp){
            temp = arr[i];
            len = i+65;
        }
    }
    if(check(arr,temp)){
            len = '?';
    }
    printf("%c\n",len);
}