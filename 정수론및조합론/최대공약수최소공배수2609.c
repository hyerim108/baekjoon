#include <stdio.h>
int gdb(int N,int M)
{
   int num=1,result;
    int a = N>M?N:M;
    while(num<=a){
        if(N%num==0 && M%num==0) 
            result=num;
        num++;
    }
    return result;
}
int main()
{
    int N,M;
    scanf("%d %d",&N,&M);
    printf("%d\n%d\n",gdb(N,M),(N*M)/gdb(N,M));
}