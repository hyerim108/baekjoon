#include <stdio.h>
int main()
{
    int size;
    char input[20000];
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        scanf("%s",&input[i]);
    }
    int i=0;
    while(i<size){
        int j = 0;
        while(j<size-1){
            if(input[j]>input[j+1]){
                char temp = input[j];
                input[j] = input[j+1];
                input[j+1] = temp;
            }
            j++;
        }
        i++;
    }
    for(int i =0;i<size;i++){
        printf("%c\n",input[i]);
    }
}