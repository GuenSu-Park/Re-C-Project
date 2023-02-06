/* 함수 포인터 */
#include <stdio.h>

int max(int a, int b);
int donothing(int c, int k);
int main() {
  int a, b;
  int (*pfunc)(int, int);
  /* 함수 포인터의 정의 부분 
  (함수의 리턴형) (*포인터 이름)(첫번째 인자 타입, 두번째 인자 타입,....)
   특정한 타입의 진자를 판별하는 일은 단순히 변수의 이름만 빼버리면
   된다. 예를들어 int increase(int (*arr)[3], int row)라면
   int (*pfunc)(int (*)[3], int);이다. */ 
  pfunc = max; //흠 max를 위에서 미리 말해놔서 가능한듯 아마도? 

  scanf("%d %d", &a, &b);
  printf("max(a,b) : %d \n", max(a, b));
  printf("pfunc(a,b) : %d \n", pfunc(a, b));

  pfunc = donothing; //포인터니까 당연히 바꿀 수도 있다. 

  printf("donothing(1,1) : %d \n", donothing(1, 1));
  printf("pfunc(1,1) : %d \n", pfunc(1, 1));
  return 0;
}
int max(int a, int b) {
  if (a > b)
    return a;
  else
    return b;

  return 0;
}
int donothing(int c, int k) { return 1; }
