/* 상수 포인터? */
#include <stdio.h>
int main() {
  int a;
  int b;
  const int* pa = &a;

  *pa = 3;  // 올바르지 않은 문장
  pa = &b;  // 올바른 문장
  return 0;
}
/* const int *pa는 쉽게 생각해서 int형 변수가 const처리, 상수처리가 
된다고 보자. 그래서 포인터 pa가 가리키고 있는 int형 변수 a의 값이
바뀌면 안된다. */ 

/* 상수 포인터? */
#include <stdio.h>
int main() {
  int a;
  int b;
  int* const pa = &a;

  *pa = 3;  // 올바른 문장
  pa = &b;  // 올바르지 않은 문장

  return 0;
}
/* 여기서는 포인터 pa가 const처리, 상수처리가 됐기 때문에 pa의 값
즉, a말고의 다른 변수의 주소가 들어갈 수가 없다. */ 

/* 과연? */
#include <stdio.h>
int main() {
  int a;
  char b;
  double c;
  int* pa = &a;
  char* pb = &b;
  double* pc = &c;

  printf("pa 의 값 : %p \n", pa);
  printf("(pa + 1) 의 값 : %p \n", pa + 1);
  printf("pb 의 값 : %p \n", pb);
  printf("(pb + 1) 의 값 : %p \n", pb + 1);
  printf("pc 의 값 : %p \n", pc);
  printf("(pc + 1) 의 값 : %p \n", pc + 1);

  return 0;
}
/* 실행결과
pa 의 값 : 0x7ffcf64a2e04 
(pa + 1) 의 값 : 0x7ffcf64a2e08 
pb 의 값 : 0x7ffcf64a2e03 
(pb + 1) 의 값 : 0x7ffcf64a2e04 
pc 의 값 : 0x7ffcf64a2e08 
(pc + 1) 의 값 : 0x7ffcf64a2e10 
각각의 변수형마다 더해지는 값이 달라짐. int a는 4, char b는 1
, double c는 8이 더해졌다. */

/* 과연? */
#include <stdio.h>
int main() {
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int* parr;
  int i;
  parr = &arr[0];

  for (i = 0; i < 10; i++) {
    printf("arr[%d] 의 주소값 : %p ", i, &arr[i]);
    printf("(parr + %d) 의 값 : %p ", i, (parr + i));

    if (&arr[i] == (parr + i)) {
      /* 만일 (parr + i) 가 성공적으로 arr[i] 를 가리킨다면 */
      printf(" --> 일치 \n");
    } else {
      printf("--> 불일치\n");
    }
  }
  return 0;
}
/* 포인터 덧셈을 이용하여 배열의 주소값과 똑같이 사용할 수 있다. *? 

