#include <stdio.h>

int main() {
    int N, arr[1000];
    scanf("%d", &N);
    for (int i=0; i<N; i++)
        scanf("%d", &arr[i]);
    
    int cnt = 0, indices[1000];

    indices[cnt++] = 0;
    for (int i=1; i<N; i++){
        int last_idx =indices[cnt -1];
        if (arr[i] > arr[last_idx])
            indices[cnt++] = i;
    }

    for (int i= cnt-1; i>=0; i--){
        int idx = indices[i];
        printf("%d ", idx + 1);
    }
    return 0;
}