#include <stdio.h>

int main() {
    int n, arr[15][15];
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        arr[i][0] = 1;
        arr[i][i] = 1;
    }
    if(n>2){
        for(int i=2; i<n; i++){
            for(int j=1; j<i; j++){
                arr[i][j] = arr[i-1][j] + arr[i-1][j-1];
            }
        }

    }
    for(int i=0; i<n; i++){
            for(int j=0; j<i+1; j++){
                printf("%d " ,arr[i][j]);
            }
            printf("\n");
        }
    return 0;
}