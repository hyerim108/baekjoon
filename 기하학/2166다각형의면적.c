#include <stdio.h>
#include <math.h>
int main()
{
    long long x[100000],y[100000];
    int input;
    
    double A=0;
    scanf("%d",&input);
    for(int i =1;i<=input;i++){
        scanf("%lld %lld", &x[i],&y[i]);
    }
    for(int i=1;i<=input;i++){
        if(i==input) {
            A += x[i]*y[1];
            A -= x[1]*y[i];
            }
        else {
            A += x[i]*y[i+1];
            A -= x[i+1]*y[i];
        }
    }
    if(A<0) A *= -1;
    A/=2;
    printf("%.1lf\n",A);
}