/* ������ �̿��ϱ� */
#include <stdio.h>
int main() {
  int arr[10] = {100, 98, 97, 95, 89, 76, 92, 96, 100, 99};

  int* parr = arr;
  int sum = 0;

  while (parr - arr <= 9) { 
    sum += (*parr);
    parr++;
  }
/* ���⼭ parr�� +1�� ���ְ� �Ǹ� �ּҰ����� 4�� �ö󰡼� 9���� ��
ũ�� ���̰� ���� ���� �ƴϳİ� ������ �ߴ�. ������ �ּҰ��� 4�� �ö�
�� ���� ������ parr - arr�� �������� ������ ����Ǽ�
(���� �ּҰ� ���� / (������ ũ��)) �� ����� �ȴ�. */ 
  printf("�� ���� ���� ��� : %d \n", sum / 10);
  return 0;
}


/* �������� ������ */
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
/* ppa���� pa�� �ּҰ��� ���� *ppa�� pa�� ����Ű�� a�� �ּҰ���
�ǰ� **ppa�� pa�� ����Ű�� a�� ����ִ� ���� �Ǿ a���� ������ �ȴ�. */ 

/* ����! ���� �迭�� ������ */
#include <stdio.h>
int main() {
  int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
  int(*parr)[3];  // ��ȣ�� �� ���̼���

  parr = arr;  // parr �� arr �� ����Ű�� �Ѵ�.

  printf("parr[1][2] : %d , arr[1][2] : %d \n", parr[1][2], arr[1][2]);

  return 0;
}


