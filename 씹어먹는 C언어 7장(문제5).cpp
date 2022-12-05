#include <stdio.h>

int main() {
    int N;
    long result=1; // int로 하면 숫자가 20만 넣어도 안되길래 좀 더 큰 long을 써보았다. 
    
    printf("몇까지의 곱이 궁금하신가요?");
    scanf("%d", &N);
    printf("\n");
    
    for (int i=1; i<=N; i++) {
        printf("%d X ", i);
        result*=i;
    }
    printf(" = %ld", result);
    
    return 0;
}
