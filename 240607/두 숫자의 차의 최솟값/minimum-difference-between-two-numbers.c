#include <stdio.h>

int main() {
    int n, arr[100];
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int min = 100;
    for (int i=0; i<n-1; i++){
        if (arr[i+1] - arr[i] < min)
            min = arr[i+1] - arr[i];
    }
    printf("%d", min);
    // 여기에 코드를 작성해주세요.
    return 0;
}