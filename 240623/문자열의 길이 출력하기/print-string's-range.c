#include <stdio.h>
#include <string.h>

int main() {
    char str[100], len;
    scanf("%s ", &str);
    len = strlen(str);
    scanf("%s", &str);
    len += strlen(str);
    printf("%d", len);
    // 여기에 코드를 작성해주세요.
    return 0;
}