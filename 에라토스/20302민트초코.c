#include <stdio.h>
int main()
{
    int size,arr[100000];
    scanf("%d", &size);
    for(int i=0;i<size*2-1;i++){
        scanf("%d", arr[i]);
    }
    int a=arr[0];
    int p=1;
    while(p<size*2-1){
        if(arr[p] == '*') a=a*arr[p+1];
        if(arr[p] == '//') a=a/arr[p+1];
        p++;
        printf("%d\n",p);
    }
    printf("%d",a);
}