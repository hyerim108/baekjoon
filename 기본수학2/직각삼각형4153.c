#include <stdio.h>
int check(int x,int y,int z){
    int max,a,b;
    if(x>=y && x>=z){
        max= x;
        a= y; b=z;
    }else if(y>=x && y>=z){
        max = y;a= x;b=z;
    }else{
        max=z;
        a= y;
        b=x;
    }
    if(max*max==a*a+b*b) return 1;
    else return 0;
}
int main()
{
    int x,y,z,result;
    while(1){
        scanf("%d %d %d",&x,&y,&z);
        if(x==0 && y==0 && z==0) break;
        if(check(x,y,z)) printf("%s\n","right");
        else printf("%s\n","wrong");
    }
}