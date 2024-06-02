#include <stdio.h>

int main() {
    int arr[50],n;
    scanf("%d", &n);
    arr[0] = 1;
    arr[1] = n;
    printf("%d %d ", arr[0], arr[1]);
    for (int i=2; i<50; i++){
        arr[i] = arr[i-1] + arr[i-2];
        printf("%d ", arr[i]);
        if (arr[i] >100){
            break;
        }
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}