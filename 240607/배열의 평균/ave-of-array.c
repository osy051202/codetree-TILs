#include <stdio.h>

int main() {
    int arr[2][4];
    for (int i=0; i<2; i++){
        for (int j=0; j<4; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i=0; i<2; i++){
        double sum1 = 0;
        for (int j=0; j<4; j++){
            sum1 += arr[i][j];
        }
        printf("%.1lf ", sum1/4);
    }
    printf("\n");
    for (int j=0; j<4; j++){
        double sum2 =0;
        for (int i=0; i<2; i++){
            sum2 += arr[i][j];
        }
        printf("%.1lf ", sum2/2);
    }
    printf("\n");
    double sum3 = 0;
    for (int i=0; i<2; i++){
        for (int j=0; j<4; j++){
            sum3 += arr[i][j];
        }
    }
    printf("%.1lf", sum3 / 8);
    // 여기에 코드를 작성해주세요.
    return 0;
}