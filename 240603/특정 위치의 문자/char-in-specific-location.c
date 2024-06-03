#include <stdio.h>

int main() {
    int idx=-1;
    char c, arr[6] = { 'L', 'E', 'B', 'R', 'O', 'S'};
    scanf("%c", &c);
    for (int i=0; i<6; i++){
        if (c==arr[i]) idx = i;
        }
    if (idx == -1) printf("None");
    else printf("%d", idx);   // 여기에 코드를 작성해주세요.
    return 0;
}