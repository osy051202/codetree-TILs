#include <stdio.h>
#include <string.h>

int main() {
    int max=0, min = 20;
    for (int i=0; i<3; i++){
        char str[20];
        scanf("%s ", &str);
        
        if (strlen(str) > max) max = strlen(str);
        if (strlen(str) < min) min = strlen(str);  
    }
    printf("%d", max - min);
    
    // 여기에 코드를 작성해주세요.
    return 0;
}