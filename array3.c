#define N 3
#define M 3
#include <stdio.h>

int main(){
    int matrix[N][M];
    printf("Your mattrix: \n");
    for (int i = 0; i<N;i++){
        for (int j = 0; j<M; j++){
            if (j < N - i - 1){
                matrix[i][j]=1;
            }
            else{
                matrix[i][j]=0;
            }
        }
    }
    for (int x = 0; x<N; x++){
        for (int y = 0; y<M;y++){
            printf("%d",matrix[x][y]);
            if (y+1==M){
                printf("\n");
            }
        }
    }
    return 0;
}
