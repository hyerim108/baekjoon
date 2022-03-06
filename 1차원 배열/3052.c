#include <stdio.h>
int main()
{
    int input,result[10],retry=0;
    for(int i =0;i<10;i++) {
        scanf("%d",&input); //받고
        //나머지 result에 넣어주기
        result[i] = input % 42;
    }
    //돌면서 result에 같은 친구들이 있는지 확인
    for (int i=0;i<10;i++){
        int cnt = 0;
        for(int j=i+1;j<10;j++){
            if(result[i] == result[j]) cnt++;
        }
        if(cnt == 0) retry++;
    }
    printf("%d\n",retry);
}