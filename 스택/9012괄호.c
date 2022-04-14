#include <stdio.h>
#include <string.h>
int main(){
    int input;
    scanf("%d",&input);
    while(input--){
        char arr[50];
        scanf("%s",&arr);
        int rc=0,lc=0,chk=1;
        for(int i=0;i<strlen(arr);i++){
            if(arr[i]==')') rc++;
            if(arr[i] == '(') lc++;
            if(rc>lc) chk=0;
        }
        if(rc==lc && chk==1) printf("YES\n");
        else printf("NO\n");
    }
}