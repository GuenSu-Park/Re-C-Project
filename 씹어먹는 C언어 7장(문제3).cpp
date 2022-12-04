#include <stdio.h>

int main() {
    int sum=0;
    
    for (int i=1; i<=1000; i++) {
        if (i%3==0 || i%5==0) {
            sum+=i;
        }
    }
    
    printf("1000이하의 3또는 5의 배수인 자연수들의 합은 %d이다.", sum);
    
    return 0;
}
