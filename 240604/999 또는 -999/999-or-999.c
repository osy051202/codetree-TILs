#include <stdio.h>

int main() {
    int arr[100], n;
    for (int i=0; i<100; i++){
        scanf("%d", &arr[i]);
        if (arr[i] == 999 || arr[i] == -999){
            n = i;
            break;
        }
    }
    int max = arr[0], min = arr[0];
    for (int i=0; i<n; i++){
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    printf("%d %d", max, min);
    // 여기에 코드를 작성해주세요.
    return 0;
}