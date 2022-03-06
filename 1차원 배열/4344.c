#include <stdio.h>
int main()
{
    int input,count=0,student,sum;
    int arr[1000];
    float result;
    scanf("%d",&input);
    //배열안에 들어갈 친구들
    for(int i=0;i<input;i++){
        count=0; 
        sum = 0;
        result=0;
        scanf("%d",&student);
        //학생 점수 입력 배열
        for(int j = 0;j<student;j++){
            scanf("%d",&arr[j]);
            sum+=arr[j];
        }
        result = sum /student;
        //평균넘는거 count변수로 세어주기
        for(int x=0;x<student;x++){
            if(result<arr[x]) count++;
        }
        printf("%.3f%%\n",(float)count/student *100);
    }
    return 0;
}