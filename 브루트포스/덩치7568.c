#include <stdio.h>
int main()
{
    int size,x[100],y[100];
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        scanf("%d %d",&x[i], &y[i]);
    }
    for(int i=0;i<size;i++){
        int k=0;
        for(int j=0;j<size;j++){
            if(x[i]<x[j] && y[i] < y[j])
                k++;
        }
        printf("%d ",k+1);
    }
}