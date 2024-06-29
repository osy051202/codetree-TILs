#include <stdio.h>
#include <string.h>

int main(){
    char result[200];
    int num=0;
    char s1[100], s2[100];
    scanf("%[^\n] %[^\n]", &s1, &s2);
    for (int i=0; i<strlen(s1); i++){
        if (s1[i] != ' ') printf("%c", s1[i]);
    }
    for (int i=0; i<strlen(s2); i++){
        if (s2[i] != ' ') printf("%c", s2[i]);
    }    
    // 여기에 코드를 작성해주세요.
    return 0;
}