#include <stdio.h>
int main()
{
    int n,cnt=1,max=0; //점수 입력 count라서 1부터 센다
    float result=0;
    scanf("%d",&n);
    int input[n]; //n 값만큼 배열에 넣을 과목 점수들
    for(int i=0;i<n;i++){
        scanf("%d",&input[i]);
        cnt++;
    }
    //max 구하는 for문
    for(int i =0;i<n;i++){
        if(input[i]>max) max = input[i];
    }
    for(int i =0;i<n;i++){
        result += ((float)input[i] / max) *100;
    }
    printf("%.2f",result/n);
}