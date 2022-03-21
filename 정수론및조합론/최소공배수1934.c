#include <stdio.h>
int main()
{
    int input,N,M,namug,a,b;
    scanf("%d",&input);
    for(int i=0;i<input;i++){
        scanf("%d %d",&N,&M);
        a = N>M?N:M; //a에 N이 크면 N을 넣고 M이 크면 m 큰값
        b = N<M?N:M; //b에 N이 작으면 N을 넣고 암튼 작은값
        while(1){
            if(a%b==0) break;
            else {
                namug = a%b;
                if(a/b==0){
                    b=1;
                    break;
                }
                a=b;
                b= namug;
            }
        }
        printf("%d\n",N*M/b);
    }
}