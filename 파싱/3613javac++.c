#include <stdio.h>
#include <string.h>
int main(){
    char arr[100];
    for(int i = 0;i<strlen(arr);i++){
        if(arr[i] == 'j') printf("c");
        if(arr[i] == "_") printf("=");
    }
}