#include <stdio.h>
#include <string.h>
int main()
{
    char str[15];
    int count=0;
    scanf("%s",&str);
    for(int i=0;i<strlen(str);i++){
        if(str[i] == 'A' || str[i] == 'B' || str[i] == 'C') count+=3;
        if(str[i] == 'D' || str[i] == 'E'|| str[i] == 'F') count+=4;
        if(str[i] == 'G' || str[i] == 'H' || str[i] == 'I') count+=5;
        if(str[i] == 'J' || str[i] == 'K'|| str[i] == 'L') count+=6;
        if(str[i] == 'M' || str[i] == 'N' || str[i] == 'O') count+=7;
        if(str[i] == 'P' || str[i] == 'Q'|| str[i] == 'R'|| str[i] == 'S') count+=8;
        if(str[i] == 'T' || str[i] == 'U' || str[i] == 'V') count+=9;
        if(str[i] == 'W' || str[i] == 'X'|| str[i] == 'Y'|| str[i] == 'Z') count+=10;
    }
    printf("%d\n",count);
}