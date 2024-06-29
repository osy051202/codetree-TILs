#include <stdio.h>
#include <string.h>

int main() {
    char str[100], a;
    int cnt=0;
    fgets(str, 100, stdin);
    scanf("%c", &a);
    for(int i=0; i<strlen(str); i++){
        if (str[i] == a) cnt++;
    }
    printf("%d", cnt);
    // 여기에 코드를 작성해주세요.
    return 0;
}