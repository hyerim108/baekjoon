#include <stdio.h>
#include <string.h>
int main(){
    char arr[1000000];
    int cnt=0;
    scanf("%s",&arr);
    for(int i =0;i<strlen(arr);i++){
        if(arr[i] == 'P') {
            cnt++;
            continue;
        }
        if(cnt>=2 && arr[i+1] == 'P') {cnt--; i++;}
        else {
            printf("NP\n");
            return 0;
        }
    }
    if(cnt ==1) printf("PPAP\n");
    else printf("NP\n");
}