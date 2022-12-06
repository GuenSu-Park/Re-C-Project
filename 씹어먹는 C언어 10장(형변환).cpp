#include <stdio.h>
int main() {
  int a, b;
  float c, d;

  printf("두 숫자 입력 : ");
  scanf("%d %d", &a, &b);

  c = a / b;
  d = (float)a / b;

  printf("두 수의 비율 : %f %f", c, d);

  return 0;
}
/* 5와 3을 넣었을 때 c와 d의 결과값은 각각 1.000000과 1.666667이다.
a와 b의 타입이 정수타입 int로 되어있기 때문에 a/b의 값도 정수값 1만 나온다.
여기서 (float)a/b로 해주면 일부러 a/b를 float타입으로 형변환을 해줬기 때문에
d의 값은 제대로 1.666667이 나오게 된다. */ 
