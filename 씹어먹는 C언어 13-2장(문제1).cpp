#include <stdio.h>

int max_number(int *parr);
int main() {
    int arr[10];
    int i;
    
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("�Է��� �迭�� ���� ū ������ �����غ���: ");
    max_number(arr);
    return 0;
}
int max_number(int *parr) {
    int i, j;
    int max = parr[0];
    int min = 0;
    
    for (i = 1; i < 10; i++) {
        if (parr[i] > max) {
            max = parr[i];
        }
    }
    printf("%d ", max);
    
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 10; j++) {
            if (parr[j] >= min && parr[j] < max) {
                min = parr[j];
            }
            if (j == 9) {
                max = min;
                printf("%d ", min);
                min = 0;
            }
        }
    }
    return 0;
} // �ٵ� �� �ڵ�δ� �迭 �߿� ���� ���� ������ ����� �۵��� �ȵ�.

#include <stdio.h>

int arrange_number(int* parr);
int print_number(int* parr);

int main() {
	int arr[10];
	int i;
	
	for (i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}

	arrange_number(arr);
	print_number(arr);
	
	return 0;
}

int arrange_number(int* parr) {
	int i;
	int max = parr[0];
	int temp;
	int cnt = 0;

	for (i = 1; i < 10; i++) {
		if (parr[i] > max) {
			max = parr[i];
		}
	}

	for (;;) {
		for (i = 0; i < 9; i++) {
			if (parr[i] < parr[i + 1]) {
				temp = parr[i];
				parr[i] = parr[i + 1];
				parr[i + 1] = temp;
				cnt++;
			}
		}

		if (cnt == 0) { break; }
		cnt = 0;
	}


	return 0;
}

int print_number(int* parr) {
	int i;

	for (i = 0; i < 10; i++) {
		printf("%d��° ���� : %d \n", i + 1, parr[i]);
	}

	return 0;
}
// ����Ʈ�� �־��� �ڵ� �׳� �迭�� ū ���ں��� ��迭 ���ѹ��� ���� 
