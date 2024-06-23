#include <stdio.h>

int main() {
    int n, m, arr[10][10] = {0,};
    scanf("%d %d", &n, &m);
    for (int a=0; a<m; a++){
        int x,y;
        scanf("%d %d", &x, &y);
        for (int i=0; i<n; i++){
            for (int j=0; j<n; j++){
                if (i == x-1 && j == y-1){
                    arr[i][j] = x*y;
                }
            }
        }
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}