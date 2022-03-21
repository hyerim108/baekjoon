#include <stdio.h>
int main()
{
    int input,arr[51],i,num;
    scanf("%d",&input);
    if(input ==1){
        scanf("%d",&num);
        printf("%d\n",num*num);
    }
    else{
        for(i=0;i<input;i++) scanf("%d",&arr[i]);
        int temp;
        for(int i=0;i<input;i++){
            for(int j=0;j<input-1;j++){
                if(arr[j] > arr[j+1]){
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
        printf("%d\n",arr[0] * arr[input-1]);
    }
}