/* �Լ� ������ */
#include <stdio.h>

int max(int a, int b);
int donothing(int c, int k);
int main() {
  int a, b;
  int (*pfunc)(int, int);
  /* �Լ� �������� ���� �κ� 
  (�Լ��� ������) (*������ �̸�)(ù��° ���� Ÿ��, �ι�° ���� Ÿ��,....)
   Ư���� Ÿ���� ���ڸ� �Ǻ��ϴ� ���� �ܼ��� ������ �̸��� ��������
   �ȴ�. ������� int increase(int (*arr)[3], int row)���
   int (*pfunc)(int (*)[3], int);�̴�. */ 
  pfunc = max; //�� max�� ������ �̸� ���س��� �����ѵ� �Ƹ���? 

  scanf("%d %d", &a, &b);
  printf("max(a,b) : %d \n", max(a, b));
  printf("pfunc(a,b) : %d \n", pfunc(a, b));

  pfunc = donothing; //�����ʹϱ� �翬�� �ٲ� ���� �ִ�. 

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
