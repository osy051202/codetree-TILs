#include <stdio.h>

int main() {
    int arr[4][4];
    for (int i=0; i<4; i++){
        for (int j=0; j<4; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i=0; i<4; i++){
        int sum=0;
        for (int j=0; j<4; j++){
            sum += arr[i][j];
        }
        printf("%d\n", sum);
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}