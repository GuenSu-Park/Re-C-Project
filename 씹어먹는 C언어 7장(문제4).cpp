#include <stdio.h>

int main() {
    int N=1;
    int i=1;
    int number=2;
    int sum=1;
    //int N, i=1; �� �ȵ�... �Ϸ��� int N=1, i=1;�� �ؾ��ϳ���.. 
    
    while (N<=1000000) {
        N+=i;
        i=N-i;
        number++;
        if (number%2==0) {
            sum+=N;
        }
        
    }
    
    printf("1000000������ �Ǹ�ġ ������ ¦�� �׵��� ���� %d�Դϴ�.", sum);
    
    return 0;
}
