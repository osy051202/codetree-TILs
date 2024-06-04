#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, arr[1000], cnt[1000]={0,};
    scanf("%d", &n);
    for (int i=0;i<n;i++){
        scanf("%d", &arr[i]);
        cnt[arr[i]] += 1;
    }
    for (int i=n; i>=0; i--){
        if (cnt[i] == 1){
            printf("%d", i);
            break;
        }
    }
    bool s = true;
    for (int i=n; i>=0; i--){
        if (cnt[i] == 1) s = false;
    }
    if (s == true) printf("-1");

    // 여기에 코드를 작성해주세요.
    return 0;
}