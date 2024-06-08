#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int num = 1, arr[10][10];
    for (int j=0; j<n ;j++){
        for (int i=0; i<n; i++){
            arr[i][j] = num;
            num++;
        }
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}