#include <stdio.h>

int slave(int present_money, int today_income) {
    
    present_money += today_income;
    
    return present_money; 
}
/* present_money += today_income; return present_money;�� �� �ٷ� �ٿ���
return (present_money + today_income); ���� �� �� �ִ�. */ 
int main() {
    int present_money;
    int today_income;
    
    printf("���� ������ ������ �ִ� ����� �Է����ּ���: ");
    scanf("%d", &present_money);
    
    printf("���� ������ ������ �Է����ּ���: ");
    scanf("%d", &today_income);
    
    printf("���� ������ ������ �ִ� ��� %d�� ���� ������ ���� %d�� ���� ���� ������ ����� %d�Դϴ�.", present_money, today_income, slave(present_money, today_income));
    
    return 0;
}
