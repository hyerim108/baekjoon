#include <stdio.h>
int qsort_2(int *arr,int start,int end){
    if(start>=end) return 0;
    int pivot=start;
    int i =pivot+1;
    int j = end;
    int temp;
    while(i<=j){
        while(i<=end && arr[i]<= arr[pivot]){
            ++i;
        }
        while(j>start && arr[j] >= arr[pivot]){
            --j;
        }
        if(i>=j) break;
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    temp = arr[j];
    arr[j] = arr[pivot];
    arr[pivot] = temp;

    qsort_2(arr, start, j-1);	//피봇 중심으로 왼쪽부분 분할
	qsort_2(arr, j+1, end);	//피봇 중심으로 오른쪽부분 분할
}
int main()
{
    int size,arr[1000];
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    qsort_2(arr,0,size-1);
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}
