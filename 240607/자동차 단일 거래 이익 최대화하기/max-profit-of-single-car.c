#include <stdio.h>

int main() {
    int n, arr[1000];
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int min=arr[0];
    for (int i=0; i<n; i++){
        if (arr[i] < min){
            min = arr[i];
        }
    }
    int idx;
    for (int i=0; i<n; i++){
        if (arr[i] == min){
            idx = i;
            break;
        }
    }
    int max[1000], a=0;
    for (int i=idx+1; i<n; i++){
        if (arr[i] > min){
            max[a] = arr[i] - min;
            a++;
        }
    }
    int max_val = max[0];
    for(int i=0; i<a; i++){
        if (max[i] > max_val){
            max_val = max[i];
        }
    }
    printf("%d", max_val);
    return 0;
}