#include <stdio.h>

int main() {
    float f;
    int i;
    
    printf("실수를 입력하시오: ");
    scanf("%f", &f);
    
    i = (int)((f-(int)f)*100);
    if (i<0) {
        i=-i;
    }
    else if (i==0) {
        printf("i=00 \n");
        return 0;
    }
    
    printf("i=%d \n", i);
    
    return 0;
}
