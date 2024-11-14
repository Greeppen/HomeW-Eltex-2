#include <stdio.h>
#define N 3
#define M 3

int main(){
    int arr[N][M];
    printf("Enter array numbers: \n");
    for (int i = 0; i<N;i++){
        for(int j =0;j<M;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Your numbers: \n");
    for (int x = 0; x<N;x++){
        for(int y =0;y<M;y++){
            printf("%d",arr[x][y]);
            if ((y+1)==3){
                printf("\n");
            }
        }
    }
    return 0;
}
