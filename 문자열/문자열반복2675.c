#include <stdio.h>
#include <string.h>
int main()
{
    int n,num;//n출력할 행 num- 입력할 문자열개수
    char str[20];
    scanf("%d",&n);
    //두줄 입력
    for(int i=0;i<n;i++){
        scanf("%d %s",&num,&str);
        for(int j=0;j<strlen(str);j++){
            for(int x=0;x<num;x++) printf("%c",str[j]);
        }
        printf("\n");
    }
}