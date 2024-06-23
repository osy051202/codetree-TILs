#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], len1, len2;
    scanf("%s\n", &str1);
    len1 = strlen(str1);
    scanf("%s", &str2);
    len2 = strlen(str2);
    // printf("%s\n", str1);
    // printf("%s\n", str2);
    // printf("%d\n", len1);
    // printf("%d\n", len2);
    printf("%d", len1+len2);
    // 여기에 코드를 작성해주세요.
    return 0;
}