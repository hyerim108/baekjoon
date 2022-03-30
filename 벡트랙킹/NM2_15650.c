#include <stdio.h>
int N,M,visit[9],arr[9];
void outprint(){
    for(int i=0;i<M;i++) printf("%d ", arr[i]);
    printf("\n");
}
int back_traking(int L){
    if(L==M){
        int p=1;
        for(int i=0;i<M-1;i++){
            if(arr[i] < arr[i+1]){
                p=1;
            }else{
                p=0;
                break;
            }
        }
        if(p==1) outprint();
        return 0;
    }
    for(int i=1;i<=N;i++){
        if(visit[i]==1) continue;
        arr[L]=i;
        visit[i] = 1;
        back_traking(L+1);
        visit[i] = 0;
    }
}
int main()
{
    scanf("%d %d",&N,&M);
    back_traking(0);
}