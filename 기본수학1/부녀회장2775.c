#include <stdio.h>
int main(){
    int people[15][15];
    int N,x,y;
    for(int i =1;i<15;i++){
        people[0][i]=i;
    }
    for(int i=1;i<15;i++){
        for(int j=1;j<15;j++){
            if(j==1) people[i][j] = 1;
            else
                people[i][j] = people[i-1][j] + people[i][j-1];
        }
    }
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d\n%d",&x,&y);
        printf("%d\n",people[x][y]);
    }
    return 0;
}