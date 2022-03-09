#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    scanf("%s",&str);
    int count=strlen(str);
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]=='c' && (str[i+1]=='=' ||str[i+1] =='-')) count--;
        if(str[i] =='d' && (str[i+1]=='-' ||(str[i+1]=='z' && str[i+2] == '='))) count--;
        if((str[i]=='s' ||str[i] =='z')&&str[i+1]=='=') count--;
        if((str[i]=='n' ||str[i] =='l') && str[i+1]=='j') count--;
    }
    printf("%d\n",count);
}