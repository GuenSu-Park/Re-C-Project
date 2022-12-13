/* 포인터 이용하기 */
#include <stdio.h>
int main() {
  int arr[10] = {100, 98, 97, 95, 89, 76, 92, 96, 100, 99};

  int* parr = arr;
  int sum = 0;

  while (parr - arr <= 9) { 
    sum += (*parr);
    parr++;
  }
/* 여기서 parr에 +1씩 해주게 되면 주소값에서 4가 올라가서 9보다 더
크게 차이가 나는 것이 아니냐고 생각을 했다. 하지만 주소값은 4씩 올라가
는 것이 맞지만 parr - arr은 포인터의 뺄셈이 적용되서
(실제 주소값 차이 / (포인터 크기)) 로 계산이 된다. */ 
  printf("내 시험 점수 평균 : %d \n", sum / 10);
  return 0;
}


/* 포인터의 포인터 */
#include <stdio.h>
int main() {
  int a;
  int *pa;
  int **ppa;

  pa = &a;
  ppa = &pa;

  a = 3;

  printf("a : %d // *pa : %d // **ppa : %d \n", a, *pa, **ppa);
  printf("&a : %p // pa : %p // *ppa : %p \n", &a, pa, *ppa);
  printf("&pa : %p // ppa : %p \n", &pa, ppa);

  return 0;
}
/* ppa에는 pa의 주소값이 들어가서 *ppa는 pa가 가르키는 a의 주소값이
되고 **ppa는 pa가 가르키는 a에 들어있는 값이 되어서 a값이 나오게 된다. */ 

/* 드디어! 배우는 배열의 포인터 */
#include <stdio.h>
int main() {
  int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
  int(*parr)[3];  // 괄호를 꼭 붙이세요

  parr = arr;  // parr 이 arr 을 가리키게 한다.

  printf("parr[1][2] : %d , arr[1][2] : %d \n", parr[1][2], arr[1][2]);

  return 0;
}


