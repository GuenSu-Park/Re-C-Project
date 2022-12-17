#include <stdio.h>

int factorize(int N) {
    
    printf("%d = ", N);
    
    for (;;) {
        for (int i=2; i<=N; i++) {
            if (N%i == 0) {
                if (N == i) {
                    printf("%d", i);
                    N = N / i;
                    break;
                }
                printf("%d X ", i);
                N = N / i;
                break;
            }
        }
        if (N == 1) {
            break;
        }
    }
    return 0;
}
int main() {
    int N;
    
    printf("소인수분해 할 수를 입력해주세요: ");
    scanf("%d", &N);
    
    factorize(N);
    
    return 0;
}
