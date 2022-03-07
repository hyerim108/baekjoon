#include <stdio.h>
int main()
{
    int n,input,result=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%1d",&input);
        result+=input;
    }
    printf("%d\n",result);
}