#include <stdio.h>

int main() {
    int N;
    
    printf("몇 줄의 삼각형을 만드시겠습니까?");
    scanf("%d", &N);
    
    for (int i=1; i<=N; i++) {
        for (int j=1; j<=N-i; j++) {
            printf(" ");
        }
        for (int k=1; k<=2*i-1; k++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
