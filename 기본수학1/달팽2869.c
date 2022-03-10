#include <stdio.h>
int main()
{
    int A,B,V;
    scanf("%d %d %d",&A, &B, &V);
    int day=0;
    day =ceil((double)(V-A)/(double)(A-B))+1;
    printf("%d\n",day);
}
