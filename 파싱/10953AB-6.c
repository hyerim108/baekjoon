#include <stdio.h>
int main(){
    int S;
    scanf("%d",&S);
    for(int i=0;i<S;i++){
        int a,b;
        scanf("%d,%d",&a,&b);
        printf("%d\n",a+b);
    }
}