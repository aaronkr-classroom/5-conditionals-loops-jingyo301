// switch.c
#include <stdio.h>

int main(void) {
	int score;
	char grade;

	printf("�۾� ����\n");
	printf("������ �Է��ϼ��� >>> ");
	scanf_s("%d", &score);

	switch(score / 10) { // "100 / 10 = 10", "92 / 10 = 9"
	case 10:
	case 9:
		grade = 'A'; break; // switch���� ������(����)
	case 8:
		grade = 'B'; break;
	case 7:
		grade = 'C'; break;
	case 6:
		grade = 'D'; break;
	default:
		grade = 'F'; break; // default���� break�Ƚᵵ ��
	}

	printf("������ %d�̰� ����� %c�Դϴ�.\n", score, grade);
	printf("�۾� ����");

	//getch(); // �ܼ�â �����ϱ�

	return 0;
}