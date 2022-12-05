#include <stdio.h>

int main() {
    int N=1;
    int i=1;
    int number=2;
    int sum=1;
    //int N, i=1; 가 안됨... 하려면 int N=1, i=1;로 해야하나봄.. 
    
    while (N<=1000000) {
        N+=i;
        i=N-i;
        number++;
        if (number%2==0) {
            sum+=N;
        }
        
    }
    
    printf("1000000이하의 피모나치 수열의 짝수 항들의 합은 %d입니다.", sum);
    
    return 0;
}
