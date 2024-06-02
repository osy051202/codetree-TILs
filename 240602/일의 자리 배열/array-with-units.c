#include <stdio.h>

int main() {
    int arr[10],a,b;
    scanf("%d %d", &a, &b);
    arr[0] = a;
    arr[1] = b;
    for (int i=2; i<10; i++){
        arr[i] = (arr[i-2] + arr[i-1]) % 10;
    }
    for (int i=0; i<10; i++){
        printf("%d ", arr[i]);
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}