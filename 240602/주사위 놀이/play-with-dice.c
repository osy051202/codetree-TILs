#include <stdio.h>

int main() {
    int arr[10], cnt[6] = {0,0,0,0,0,0};
    for (int i=0; i<10; i++){
        scanf("%d ", &arr[i]);
        for (int j=1; j<7; j++){
            if (arr[i] == j) cnt[j-1] += 1;
        }
    }
    for (int i=0; i<6; i++){
        printf("%d - %d\n", i+1, cnt[i]);
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}