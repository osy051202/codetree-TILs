#include <stdio.h>
#include <string.h>

int main() {
    char str1[20], str2[20], len1, len2;
    scanf("%s %s", str1, str2);
    len1 = strlen(str1);
    len2 = strlen(str2);
    if (len1 == len2){
        printf("same");
    }
    else{
        if (len1 > len2){
            printf("%s %d", str1, len1);
        }
        else{
            printf("%s %d", str2, len2);
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}