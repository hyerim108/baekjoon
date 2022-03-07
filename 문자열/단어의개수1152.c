#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000000];
    int count=1;
    scanf("%[^\n]s",str);
    int max = strlen(str);
    for(int i=0;i<max;i++)
        if(str[i]==' ') count++;
    if(str[0] == ' ') count--;
    if(str[max-1] == ' ') count--;
    printf("%d\n",count);
}
