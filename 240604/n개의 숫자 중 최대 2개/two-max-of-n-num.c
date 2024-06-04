#include <stdio.h>

int main() {
    int n, arr[100];
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int temp;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("%d %d", arr[0], arr[1]);
    // 여기에 코드를 작성해주세요.
    return 0;
}