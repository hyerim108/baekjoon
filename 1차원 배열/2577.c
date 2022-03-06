#include <stdio.h>
int main()
{
    int x,y,z,result,mod,input[10];
    scanf("%d %d %d",&x,&y,&z);
    result = x * y *z;
    
    for (int i =0;i<10;i++) input[i] = 0;
    for(int i =0;result>0;i++)
    {
        mod = result % 10;
        input[mod]+=1;
        result = result / 10;
    }
    for(int i =0;i<10;i++){
        printf("%d\n",input[i]);
    }
}