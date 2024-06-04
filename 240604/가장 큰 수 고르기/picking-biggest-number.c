#include <stdio.h>

int main() {
    int arr[10], max = 0;
    for (int i=0; i<10; i++){
        scanf("%d", &arr[i]);
        if (arr[i] > max) max = arr[i];
    }
    printf("%d", max);
    // 여기에 코드를 작성해주세요.
    return 0;
}