#include <stdio.h>
#include <string.h>
int check(char a,char *arr,int x)
{
    int i=0;
    while(i<x){
        if(arr[i] == a) return 1;
        i++;
    }
    return 0;
}
int main()
{
    char alpha[26];
    char arr[101];
    int a,count=0;
    scanf("%d",&a);

    for(int i =0;i<26;i++){
        alpha[i]=0;
    }
    for (int i=0;i<a;i++){
        scanf("%s",&arr); //갯수 입력받기
        for(int x=0;x<strlen(arr);x++){ //한문장씩 입력받은 갯수가지 돌아본다.
            if(arr[x] == arr[x+1] || arr[x] != arr[x+1])
            {
                if(alpha[arr[x]%97] == 1){
                    if(check(arr[x],arr,x)&& arr[x-1] == arr[x])
                        continue;
                    else if(check(arr[x],arr,x)&& arr[x-1] != arr[x]){
                        //중목이 있는것이기 때문에 count++;
                    count++;
                    break; //현재 for문에서 빠져나가기
                    }
                }
                else
                    alpha[arr[x]%97]=1;
            }
        }
    }
    printf("%d\n",a-count);
}