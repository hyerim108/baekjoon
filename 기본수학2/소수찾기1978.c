#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int a[N],c,count,cnt=0;
    for(int i=0;i<N;i++)
    {
        scanf("%d",&c);
        a[i]=c;
    }
    c=0;
    while(N--){
        count=0;
        for(int i=1;i<=a[c];i++)
        {
            if(a[c]%i==0) count++;
        }
        
        if(count==2) cnt++;
        c++;
    }
    printf("%d\n",cnt);
}