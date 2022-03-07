#include <stdio.h>
int self(int n){
    int result;
    result = n;
    if(n>=10000){result +=n/10000; n%=10000;}
    if(n>=1000) {result += n/1000; n%=1000;}
    if(n>=100){result+=n/100; n%=100;}
    if(n>=10) {
        result += n/10;
        n%=10;
         }
  
    return result+=n;
}
int main()
{
    int idx=0;
    int arr[10000];
    for(int i=1;i<10001;i++)
    {
        idx = self(i); // 같은 값이있으면 리턴
        if(idx<= 10000)
            arr[idx]=-1;
    }
    for (int i =1;i<10001;i++){
        if(arr[i] != -1)
            printf("%d\n",i);
    }
}