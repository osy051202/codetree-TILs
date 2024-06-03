#include <stdio.h>

int main() {
    int n, q, k, arr[100];
    scanf("%d %d\n", &n, &q);
    for (int i=0; i<n; i++){
        scanf("%d ", &arr[i]);
    }
    for (int i=0; i<q; i++){
        scanf("%d ", &k);
        if (k == 1){
            int a;
            scanf("%d\n", &a);
            printf("%d\n", arr[a-1]);
        }
        else if (k==2){
            int b, cnt = 0;
            scanf("%d\n", &b);
            for (int j=0; j<n; j++){
                if (arr[j] == b){
                    printf("%d\n", j+1);
                    cnt++;
                    break;
                }
            }
            if (cnt == 0){
                    printf("0\n");
                }
        }
        else {
            int s,e;
            scanf("%d %d\n", &s, &e);
            for (int j=s-1; j<e; j++){
                printf("%d ", arr[j]);
            }
            printf("\n");
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}