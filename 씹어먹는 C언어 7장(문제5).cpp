#include <stdio.h>

int main() {
    int N;
    long result=1; // int�� �ϸ� ���ڰ� 20�� �־ �ȵǱ淡 �� �� ū long�� �Ẹ�Ҵ�. 
    
    printf("������� ���� �ñ��ϽŰ���?");
    scanf("%d", &N);
    printf("\n");
    
    for (int i=1; i<=N; i++) {
        printf("%d X ", i);
        result*=i;
    }
    printf(" = %ld", result);
    
    return 0;
}
