#include <stdio.h>

int main() {
    int n, m, arr[10][10] = {0,};
    scanf("%d %d", &n, &m);
    int num=1;
    for (int i=0; i<m; i++){
        int x,y;
        scanf("%d %d", &x, &y);
        for(int j=0; j<n; j++){
            for (int k=0; k<n; k++){
                if (j == x-1 && k == y-1){
                    arr[j][k] = num;
                    num++;
                }
            }
        }
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}