#include <stdio.h>
#include <string.h>
int num[10000];
int count=-1;
void push(int x)
{
    num[++count] = x;
}
void top()
{
    if (count < 0)
        printf("%d\n", -1);
    else
        printf("%d\n", num[count]);
}
void pop()
{
     if (count < 0)
        printf("%d\n", -1);
    else
    {
        printf("%d\n", num[count]);
        count--;
    }
}
void empty()
{
    if (count >= 0) printf("%d\n",0);
    else printf("%d\n",1);
}

int main()
{
    int input;
    scanf("%d", &input);
    while(input--)
    {
        char word[10];
        scanf("%s", &word);
        if (strcmp(word,"push") == 0)
        {
            int x;
            scanf("%d", &x);
            push(x);
        }
        else if(strcmp(word, "top") == 0)
            top();
        else if(!strcmp(word, "pop"))
            pop();
        else if(!strcmp(word,"size"))
            printf("%d\n", count+1);
        else if(!strcmp(word, "empty"))
            empty();
    }
}