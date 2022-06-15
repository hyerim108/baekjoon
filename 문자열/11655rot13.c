#include <stdio.h>
#include <string.h>
int main(){
    char arr[101];
    scanf("%[^\n]s",&arr);
    int i = 0;
    for(int i=0;i<strlen(arr);i++){
        if(arr[i]>= 'A' && arr[i] <= 'M' || arr[i]>= 'a' && arr[i] <= 'm')
            arr[i] += 13;
        else if(arr[i]>= 'N' && arr[i] <= 'Z' || arr[i]>= 'n' && arr[i] <= 'z')
            arr[i] -= 13;
    }
    printf("%s\n",arr);
}