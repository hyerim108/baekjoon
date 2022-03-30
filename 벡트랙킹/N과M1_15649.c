#include <stdio.h>
int arr[9],visit[9];
int N,M;
void outprint(){
    for(int i=0;i<M;i++) printf("%d ",arr[i]);
    printf("\n");
}
int f_backtraking(int L){
    if(L==M){
        outprint();
        return 0;
    }
    for(int i=1;i<=N;i++){
        if(visit[i]==1) continue;
        arr[L]=i;
        visit[i]=1;
        f_backtraking(L+1);
        visit[i]=0;
        
    }
}
int main()
{
    scanf("%d %d",&N,&M);
    f_backtraking(0);
}