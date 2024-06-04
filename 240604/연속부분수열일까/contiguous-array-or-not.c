#include <stdio.h>
#include <stdbool.h>

int main() {
    int n1, n2, arr1[100], arr2[100];
    bool s = false;
    scanf("%d %d", &n1, &n2);
    for (int i=0; i<n1; i++){
        scanf("%d ", &arr1[i]);
    }
    for (int j=0; j<n2; j++){
        scanf("%d ", &arr2[j]);
    }
    
    for (int i=0; i<n1; i++){
        if (arr1[i] == arr2[0]){
            for(int j=0; j<n2; j++){
                if (arr1[i+j] == arr2[j]) s = true;
                else {
                    s = false;
                    break;
                }
            }
        }
        if (s == true) break;
    }
    if (s == true) printf("Yes");
    else printf("No");
    // 여기에 코드를 작성해주세요.
    return 0;
}