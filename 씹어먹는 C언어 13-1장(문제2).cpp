#include <stdio.h>

int slave(int present_money, int today_income) {
    
    present_money += today_income;
    
    return present_money; 
}
/* present_money += today_income; return present_money;를 한 줄로 줄여서
return (present_money + today_income); 으로 할 수 있다. */ 
int main() {
    int present_money;
    int today_income;
    
    printf("현재 귀족이 가지고 있는 재산을 입력해주세요: ");
    scanf("%d", &present_money);
    
    printf("오늘 귀족의 수입을 입력해주세요: ");
    scanf("%d", &today_income);
    
    printf("현재 귀족이 가지고 있는 재산 %d에 오늘 귀족의 수입 %d를 더한 최종 귀족의 재산은 %d입니다.", present_money, today_income, slave(present_money, today_income));
    
    return 0;
}
