#include <stdio.h>

int main() {
    int n, arr[100];
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int min = arr[0];
    for(int i=0; i<n; i++){
        if (arr[i] < min) min = arr[i];
    }
    int cnt = 0;
    for (int i=0; i<n; i++){
        if (arr[i] == min) cnt++;
    }
    printf("%d %d", min, cnt);

    // 여기에 코드를 작성해주세요.
    return 0;
}