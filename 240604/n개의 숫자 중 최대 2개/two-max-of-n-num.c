#include <stdio.h>

int main() {
    int n, arr[100];
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int max1 = arr[0], idx;
    for (int i=0; i<n; i++){
        if (arr[i] > max1){
            max1 = arr[i];
        }
    }
    int max2 = arr[1];
    for (int i=0; i<n; i++){
        if (arr[i] > max2 && arr[i] < max1){
            max2 = arr[i];
        }
    }
    printf("%d %d", max1, max2);
    // 여기에 코드를 작성해주세요.
    return 0;
}