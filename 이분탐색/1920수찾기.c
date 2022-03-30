#include <stdio.h>
#include <stdlib.h>
int numfind(int *arrN,int M,int N){
    int start =0;
    int end = N-1;
    int mid;
    while(1){
        mid= (end+start)/2;
        if(arrN[mid]==M) return 1;
        if(arrN[start]==M) return 1;
        if(arrN[end] ==M) return 1;
        
        if(arrN[mid]<M){
            start = mid +1;
        }else
            end = mid -1;
        if(start>= end) return 0;
    }
}
int com(const void *a,const void *b){
    return *(int *)a > *(int *)b ? 1 : (*(int *)a< *(int *)b ? -1 : 0);
}
int main()
{
    int N,M,arrN[100000],arrM[100000];
    scanf("%d", &N);
    for(int i=0;i<N;i++){
        scanf("%d", &arrN[i]);
    }
    scanf("%d", &M);
    for(int i=0;i<M;i++){
        scanf("%d", &arrM[i]);
    }
    qsort(arrN,N,sizeof(int),com);
    for(int i=0;i<M;i++){
        printf("%d\n",numfind(arrN,arrM[i],N));
    }
}