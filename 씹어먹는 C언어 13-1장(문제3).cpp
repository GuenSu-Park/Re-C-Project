#include <stdio.h>

int calc_sum(int n) {
    int sum = 0;
    
    for (int i=1; i<=n; i++) {
        if (i == n) {
            sum += i;
            printf("%d = %d�Դϴ�.", i, sum);
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
    
    printf("1���� ������� ���� �ñ��ϽŰ���?");
    scanf("%d", &n);
    
    calc_sum(n);
    
    return 0;
}
