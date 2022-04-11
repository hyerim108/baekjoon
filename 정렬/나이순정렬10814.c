#include <stdio.h>
#include <stdlib.h>
typedef struct 
{
    int age;
    char str[101];
} id;
id a[100000];

int compare(const void *a, const void *b) 
{
    int num1 = *(int *)a;
    int num2 = *(int *)b;
 
    if (num1 < num2)
        return -1;
    if (num1 > num2)
        return 1;
    return 0;
}
int main(){
    int num;
    scanf("%d", &num);
    for(int i=0;i<num;i++){
        scanf("%d %s",&a[i].age,&a[i].str);
        
    }
    qsort(a,num,sizeof(a[0]),compare);
    for(int i =0;i<num;i++){
        printf("%d %s\n",a[i].age,a[i].str);
    }
}
//시간초과코드
// int sort(id *arr,int num){
//     int j =0;
//     while(j<num){
//         int i=0;
//         while(i<num-1){
//             while(arr[i].age>arr[i+1].age){
//             int temp = arr[i].age;
//             arr[i].age = arr[i+1].age;
//             arr[i+1].age = temp;
//             }
//             i++;
//         }
//         j++;
//     }
// }