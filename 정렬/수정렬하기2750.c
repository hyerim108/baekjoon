#include <stdio.h>
int main()
{
    int N,tab[1001],a,temp,p=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&a);
        tab[i] = a;
    }
    while(p<N){
        int j=0;
        while(j<N-1){
            if(tab[j]>tab[j+1]){
                temp = tab[j];
                tab[j]= tab[j+1];
                tab[j+1] = temp;
            }
            j++;
        }
        p++;
    }
    for(int i=0;i<N;i++)
    {
        printf("%d\n",tab[i]);
    }
}