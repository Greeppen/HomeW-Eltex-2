#include <stdio.h>
#define N 5

int main(){
    int arr[N];
    printf("Enter Elements array: \n");
    for (int i = 0; i<N; i++){
        scanf("%d",&arr[i]);
    }
    printf("your elements array: \n");
    for (int j = N-1; j>=0; j--){
        printf("%d",arr[j]);
        printf(" ");
    }
    return 0;
}
