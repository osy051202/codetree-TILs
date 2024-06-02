#include <stdio.h>

int main() {
    int n, cnt[9]={0,0,0,0,0,0,0,0,0},arr[100];
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        scanf("%d ", &arr[i]);
        for (int j=1; j<=9; j++){
            if (arr[i] == j) cnt[j-1] += 1;
        }
    }
    for (int i=0; i<9; i++){
        printf("%d\n", cnt[i]);
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}