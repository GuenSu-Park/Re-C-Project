#include <stdio.h>

int main() {
    int N;
    
    printf("�� ���� ���ﰢ���� ����ðڽ��ϱ�?");
    scanf("%d", &N);
    
    for (int i=1; i<=N; i++) {
        for (int j=1; j<=i-1; j++) {
            printf(" ");
        }
        for (int k=1; k<=2*(N-i)+1; k++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
