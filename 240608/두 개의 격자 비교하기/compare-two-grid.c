#include <stdio.h>

int main() {
    int n, m, arr1[10][10], arr2[10][10];
    scanf("%d %d", &n, &m);
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            scanf("%d", &arr1[i][j]);
        }
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            scanf("%d", &arr2[i][j]);
        }
    }
    int arr3[10][10] = {0,};
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (arr1[i][j] != arr2[i][j]){
                arr3[i][j] = 1;
            }
        }
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}