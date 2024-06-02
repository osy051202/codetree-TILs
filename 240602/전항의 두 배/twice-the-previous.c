#include <stdio.h>

int main() {
    int arr[10],a,b;
    scanf("%d %d", &a,&b);
    arr[0]=a;
    arr[1]=b;
    printf("%d %d ", arr[0], arr[1]);
    for (int i=2; i<10; i++){
        arr[i] = arr[i-1] + 2*arr[i-2];
        printf("%d ", arr[i]);
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}