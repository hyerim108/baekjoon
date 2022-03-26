#include <stdio.h>
int main(){
    int num,a[100000];
    char b[100000];
    scanf("%d", &num);
    for(int i=0;i<num;i++){
        scanf("%d %s",&a[i],&b[i]);
        
    }
    int j=0;
    while(j<num){
        int p =0;
        while(p<num-1){
            if(a[p]>a[p+1]){
            int temp = a[p];
            a[p] = a[p+1];
            a[p+1] = temp;
            char t = b[p];
            b[p] = b[p+1];
            b[p+1] = t;
            }
            p++;
        }
        j++;
    }
    for(int i =0;i<num;i++){
        printf("%d %s\n",a[i],b[i]);
    }
}