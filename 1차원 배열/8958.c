#include <stdio.h>
#include <string.h>
int main()
{
    int n,result=0,cnt=1;
    char test[80];
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        result =0;
        cnt=1;
        scanf("%s",&test);
        for(int j =0;j<strlen(test);j++){
            if (test[j] == 'O'){
                result += cnt;
                cnt++;
            }
            if (test[j] == 'X')
                cnt = 1;
        }
        printf("%d\n",result);
    }
}