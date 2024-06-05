#include <stdio.h>

int main() {
    int n, arr[1000];
    scanf("%d", &n);
    for (int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    
    int min = arr[0], idx;
    for (int i=0; i<n; i++){
        if (arr[i] < min){
            min = arr[i];
            idx = i;
        }
    }
    int max_val = 0; 
    for (int i=idx; i<n; i++){
        if ((arr[i] - min) > max_val)
            max_val = arr[i] - min;
    }
    
    printf("%d", max_val);
    // 여기에 코드를 작성해주세요.
    return 0;
}