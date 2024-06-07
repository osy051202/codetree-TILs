#include <stdio.h>

int main() {
    char arr[5][3];
    for (int i=0; i<5; i++){
        for (int j=0; j<3; j++){
            scanf("%c ", &arr[i][j]);
            arr[i][j] -= 32;
            printf("%c ", arr[i][j]);        
        }
        printf("\n");
    }


    // 여기에 코드를 작성해주세요.
    return 0;
}