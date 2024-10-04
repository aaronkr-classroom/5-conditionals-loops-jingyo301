// 369.c

#include <stdio.h>

void check369(int num);

int main(void) {
	int num = 0;
	printf("369����, ȯ���մϴ�! �������� �մϱ�? >>> ");
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++) {
		check369(i); // num ��� i ��� (i = 1~100, num = 100)
	}

	getch();

	return 0;
}

// �Լ� ���� ���
void check369(int num) { // num���� 3,6,9 Ȯ��
	int contatins369 = 0;
	int temp = num;

	// num�� �ִ� ��� ���ڸ� Ȯ���ϱ�
	while (temp > 0) {
		int digit = temp % 10; // %�� ������ �� ������
		// 3, 6, 9 Ȯ��
		switch (digit) {
		case 3:
		case 6:
		case 9:
			contatins369 = 1; // �� / true ��
			break;
		}

		temp /= 10; // ���� ���ڷ� �̵��ϱ�
	}

	if (contatins369) printf("¦!~\n");
	else printf("%d\n", num);
}