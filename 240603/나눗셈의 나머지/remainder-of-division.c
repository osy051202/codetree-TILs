#include <stdio.h>

int main() {
    int a,b,temp,arr[10]={0,0,0,0,0,0,0,0,0,0}, sum=0;
    scanf("%d %d", &a, &b);
    while (a > 1){
        temp = a%b;
        arr[temp] += 1;
        a = a/b;
    }
    for (int i=0; i<10; i++){
        sum += arr[i] * arr[i];
    }
    printf("%d", sum);
    
    // 여기에 코드를 작성해주세요.
    return 0;
}