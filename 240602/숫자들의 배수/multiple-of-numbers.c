#include <stdio.h>

int main() {
    int arr[10], n, cnt=0;
    scanf("%d", &n);
    for (int i=0; i<10; i++){
        arr[i] = n * (i+1);
        printf("%d ", arr[i]);
        if (arr[i] % 5 == 0) cnt++;
        if (cnt == 2) break;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}