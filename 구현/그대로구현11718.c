#include<stdio.h>
int main()
{
    char input;
    input = getchar();
    while(input != EOF){
        putchar(input);
        input = getchar();
    }
}