#include <stdio.h>

int main() {
    int arr[100];
    for (int i=0; i<100; i++){
        scanf("%d ", &arr[i]);
        if (arr[i]==0){
            for (int j=0; j<i; j++){
                if (arr[j]%2 == 0) printf("%d ", arr[j]/2);
                else printf("%d ", arr[j] + 3);
            }
            break;
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}