#include <stdio.h>

int main() {
    int cnt[9] = {0,0,0,0,0,0,0,0,0},arr[100];
    for (int i=0; i<100; i++){
        scanf("%d ", &arr[i]);
        if (arr[i] == 0) break;
        for (int j=1; j<10; j++){
            if (arr[i] / 10 == j) cnt[j-1] += 1;
        }
        
    }    
    for (int i=0; i<9; i++){
        printf("%d - %d\n", i+1, cnt[i]);
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}