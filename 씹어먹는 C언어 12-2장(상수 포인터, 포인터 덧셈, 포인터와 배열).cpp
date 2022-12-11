/* ��� ������? */
#include <stdio.h>
int main() {
  int a;
  int b;
  const int* pa = &a;

  *pa = 3;  // �ùٸ��� ���� ����
  pa = &b;  // �ùٸ� ����
  return 0;
}
/* const int *pa�� ���� �����ؼ� int�� ������ constó��, ���ó���� 
�ȴٰ� ����. �׷��� ������ pa�� ����Ű�� �ִ� int�� ���� a�� ����
�ٲ�� �ȵȴ�. */ 

/* ��� ������? */
#include <stdio.h>
int main() {
  int a;
  int b;
  int* const pa = &a;

  *pa = 3;  // �ùٸ� ����
  pa = &b;  // �ùٸ��� ���� ����

  return 0;
}
/* ���⼭�� ������ pa�� constó��, ���ó���� �Ʊ� ������ pa�� ��
��, a������ �ٸ� ������ �ּҰ� �� ���� ����. */ 

/* ����? */
#include <stdio.h>
int main() {
  int a;
  char b;
  double c;
  int* pa = &a;
  char* pb = &b;
  double* pc = &c;

  printf("pa �� �� : %p \n", pa);
  printf("(pa + 1) �� �� : %p \n", pa + 1);
  printf("pb �� �� : %p \n", pb);
  printf("(pb + 1) �� �� : %p \n", pb + 1);
  printf("pc �� �� : %p \n", pc);
  printf("(pc + 1) �� �� : %p \n", pc + 1);

  return 0;
}
/* ������
pa �� �� : 0x7ffcf64a2e04 
(pa + 1) �� �� : 0x7ffcf64a2e08 
pb �� �� : 0x7ffcf64a2e03 
(pb + 1) �� �� : 0x7ffcf64a2e04 
pc �� �� : 0x7ffcf64a2e08 
(pc + 1) �� �� : 0x7ffcf64a2e10 
������ ���������� �������� ���� �޶���. int a�� 4, char b�� 1
, double c�� 8�� ��������. */

/* ����? */
#include <stdio.h>
int main() {
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int* parr;
  int i;
  parr = &arr[0];

  for (i = 0; i < 10; i++) {
    printf("arr[%d] �� �ּҰ� : %p ", i, &arr[i]);
    printf("(parr + %d) �� �� : %p ", i, (parr + i));

    if (&arr[i] == (parr + i)) {
      /* ���� (parr + i) �� ���������� arr[i] �� ����Ų�ٸ� */
      printf(" --> ��ġ \n");
    } else {
      printf("--> ����ġ\n");
    }
  }
  return 0;
}
/* ������ ������ �̿��Ͽ� �迭�� �ּҰ��� �Ȱ��� ����� �� �ִ�. *? 

