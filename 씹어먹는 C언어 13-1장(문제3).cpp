#include <stdio.h>

int calc_sum(int n) {
    int sum = 0;
    
    for (int i=1; i<=n; i++) {
        if (i == n) {
            sum += i;
            printf("%d = %d입니다.", i, sum);
        }
        else {
            printf("%d + ", i);
            sum += i;
        }
    }
    return 0;
}
int main() {
    int n;
    
    printf("1부터 몇까지의 합이 궁금하신가요?");
    scanf("%d", &n);
    
    calc_sum(n);
    
    return 0;
}
