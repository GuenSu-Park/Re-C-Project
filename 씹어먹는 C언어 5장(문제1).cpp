#include <stdio.h>

int main() {
    double celsius;  // 섭씨 온도

  printf("섭씨 온도를 화씨 온도로 바꿔주는 프로그램 입니다. \n");
  printf("섭씨 온도를 입력해 주세요 : ");
  scanf("%lf", &celsius);  // 섭씨 온도를 입력 받는다.

  printf("섭씨 %f 도는 화씨로 %f 도 입니다 \n", celsius, 9 / 5 * celsius + 32);
  /* 9/5의 값이 정수값으로 즉 1로 나와서 계산이 이상해진다. 9.0과 5.0으로 바꾸면 정상적으로
  계산이 된다. 하지만 9 * celsius / 5 + 32가 정상적으로 계산이 되는 이유는 celsius가 실수형으로
  정의가 되어있기 때문에 처음부터 끝까지의 계산이 실수형으로 나와서이다. */ 

  return 0;
}
