#include <stdio.h>
int N,M,visit[9],arr[9];
void outprint(){
    for(int i=0;i<M;i++) printf("%d ", arr[i]);
    printf("\n");
}
int back_traking(int L,int index){
    if(L==M){
       outprint();
        return 0;
    }
    for(int i=1;i<=N;i++){
        if( index<=i){
            arr[L]=i;
            back_traking(L+1,i);
        }
        
    }
}
int main()
{
    scanf("%d %d",&N,&M);
    back_traking(0,0);
}