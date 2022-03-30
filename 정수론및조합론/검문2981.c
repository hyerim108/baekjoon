#include <stdio.h>
int swap(int *arr,int size){
    int i=0;
    while(i<size)
    {
        int j=0;
        while(j<size-1){
            if(arr[i]>arr[i+1]){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1]=temp;
            }
            j++;
        }
        i++;
    }
}
int gdb(int minus,int ninus,int a){
    if(minus%ninus==0)return ninus;
    else gdb()
    return result;
}
int main()
{
    int size,arr[100],minus[100];
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    swap(arr,size-1); //차례대로 정렬해주기
    //근접한 친구들의 차이값 구하기
    int j = 0;
    for(int i=size-1;i>0;i--){
        minus[j] = arr[i]-arr[i-1];
        j++;
    }
    swap(minus,size-1); //minus배열도 차례대로 해주기 그래야  제일 작은 친구가..
    //최소 공약수는 그냥 제일 작은수에서 돌면서 찾는거니까....
    int a=1000;
    for(int i=0;i<size-1;i++){
        gdb(minus[i],minus[i+1],a);
    }
    printf("%d",gdb(minus,size-1));
}