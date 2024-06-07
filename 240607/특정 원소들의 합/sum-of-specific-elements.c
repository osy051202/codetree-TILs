#include <stdio.h>

int main() {
    int arr[4][4];
    for (int i=0; i<4; i++){
        for (int j=0; j<4; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int sum = 0;
    for (int j=0; j<4; j++){
        for (int i=0; i<j+1; i++){
            sum += arr[j][i];
        }
    }
    printf("%d", sum);
    // 여기에 코드를 작성해주세요.
    return 0;
}