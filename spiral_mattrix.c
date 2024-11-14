#include <stdio.h>
#define N 4

int main(){
    int mattrix[N][N];
    int left = 0, right = N-1, bottom = N-1, top = 0;
    int first_input = 1;
    while (first_input<=N*N){
        for (int i = left; i<=right; i++){
            mattrix[top][i] = first_input;
            first_input+=1;
        }
        top+=1;
        for (int j = top; j<=bottom;j++){
            mattrix[j][right] = first_input;
            first_input+=1; 
        }
        right-=1;
        for (int x = right; x>=left; x--){
            mattrix[bottom][x] = first_input;
            first_input += 1;
        }
        bottom-=1;
        for (int y = bottom; y>=top; y--){
            mattrix[y][left]= first_input;
            first_input +=1;
        }
        left+=1;
    }
    printf("Your final marrtix: \n");
    for (int e = 0; e<N; e++){
        for (int r = 0; r<N; r++){
            printf("%d ", mattrix[e][r]);
            if (r+1==N){
                printf("\n");
            }
        }
    }
    return 0;
}
