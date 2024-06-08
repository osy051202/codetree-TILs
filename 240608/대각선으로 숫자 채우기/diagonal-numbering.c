#include <stdio.h>

int main() {
    int n, m, arr[100][100]; 
    scanf("%d %d", &n, &m);
    int num = 1;
    for (int a=0; a<n+m+1; a++){
        for (int b=0; b<n; b++){
            if (a-b >= 0 && a-b<= m-1){
                arr[b][a-b] = num;
                num++;
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