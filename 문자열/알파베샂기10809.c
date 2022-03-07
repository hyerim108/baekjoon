#include <stdio.h>
#include <string.h>
int check(char *a,char b,int i)
{
    int n=0;
    while(n<i){
        if(a[n]==b) return 0;
        n++;
    }
    return (1);
}
int main()
{
    char input[100];
    char arr[26];
    int count;
    scanf("%s",&input);
    for(int i=0;i<26;i++){
        arr[i]=-1;
    }
    for(int i=0;i<strlen(input);i++){
        count =-1;
        for (int j=97;j<=122;j++){
            count++;
            if(input[i] == j) {
                if(check(input,input[i],i)){
                    arr[count] = i;
                }
            }
        }
    }
    for(int i=0;i<26;i++){
        printf("%d ",arr[i]);
    }
}