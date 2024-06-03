#include <stdio.h>

int main() {
    int arr[4] = {0,0,0,0}, cnt=0, t;
    char s;
    for (int i=0; i<3; i++){
        scanf("%c %d ", &s, &t);
        if (s == 'Y' && t >= 37){
            arr[0] += 1;
            cnt++;
        }
        else if (s == 'Y' && t < 37) arr[2] += 1;
        else if (s == 'N' && t >= 37) arr[1] += 1;
        else arr[3] += 1;
    }
    for (int i=0; i<4; i++) printf("%d ", arr[i]);
    if (cnt >= 2) printf("E");
    // 여기에 코드를 작성해주세요.
    return 0;
}