#include <stdio.h>

int main() {
    int arr[10];
    for (int i=0; i<10; i++)
        scanf("%d", &arr[i]);
    int max=1, min = 1000;
    for (int i=0; i<10; i++){
        if (arr[i] > max && arr[i] < 500){
            max = arr[i];
        }
        if (arr[i]< min && arr[i] > 500){
            min = arr[i];
        }
    }
    printf("%d %d", max, min);
    // 여기에 코드를 작성해주세요.
    return 0;
}