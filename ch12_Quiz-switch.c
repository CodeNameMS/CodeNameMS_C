#include <stdio.h>

int main() {

	// ���� �Է¹޾Ƽ� �ش� ���� ���ϱ��� �ִ����� �˷��ִ� �ڵ带 �ۼ��ϼ���
	// - 2���� '28 or 29��' �� ó�� �ϼ���

	//int month;
	//printf("�� ���� �˰� �������� ? (1~12) : "); scanf_s("%d", &month);

	//switch (month) {
	//case 1:
	//case 3:
	//case 5:
	//case 7:
	//case 8:
	//case 10:
	//case 12:
	//	printf("31�ϱ��� �ֽ��ϴ�.\n"); break;
	//case 2:
	//	printf("28 or 29�ϱ��� �ֽ��ϴ�.\n"); break;
	//case 4:
	//case 6:
	//case 9:
	//case 11:
	//	printf("30�ϱ��� �ֽ��ϴ�.\n"); break;
	//default :
	//	printf("???\n");
	//}


	// ���� �ܸ��� �ڵ带 �ۼ��ϼ���
	// - ��� : �Ϲ�(1250), �л�(720)
	// ����ī�� �ܾ��� �����մϴ�
	// ī�带 Ȯ���մϴ�( g : �Ϲ�, s : �л� )
	// Ȯ���Ŀ� ������ �ݾ��� �˷��ּ���

	//int money; char man;
	//printf("���� ī�� �ܾ� ���� : "); scanf_s("%d", &money); 
	//getchar();
	//printf("ī�带 Ȯ���մϴ�(g/s) : "); man = getchar();

	//	switch (man) {
	//	case 'g':
	//	case 'G':
	//		money = money - 1250;
	//		printf("�Ϲ� : 1250���Դϴ�.\n");
	//		if (money >= 0)
	//			printf("�ܾ� : %d\n", money);
	//		else
	//			printf("�ܾ� ����!");
	//		break;
	//	case 's':
	//	case 'S':
	//		money = money - 720;
	//		printf("�л� : 720���Դϴ�.\n");
	//		if (money >= 0)
	//			printf("�ܾ� : %d\n", money);
	//		else
	//			printf("�ܾ� ����!");
	//		break;
	//	}

	// ������ ����( + , - , * , / ) �ڵ带 �ۼ��ϼ���
	// Ex) + , - , * , / ���� > *
	// ���� 2�� �Է� > 3 7
	// 3 * 7 = 21

	/*float su1, su2, hap=0,cha=0,dou=0,avg=0;
	char a;
	printf("���� �� ���� �Է��ϼ��� : "); scanf_s("%f %f", &su1, &su2); 
	getchar();
	printf("������ �����ϼ���(+,-,*,/) : "); a = getchar();

	switch (a) {
	case '+':
		hap = su1 + su2;
		printf("���� %.1f�Դϴ�.", hap); break;
	case '-':
		cha = su1 - su2;
		printf("���� %.1f�Դϴ�.",cha); break;
	case '*':
		dou = su1 * su2;
		printf("���� %.1f�Դϴ�.", dou); break;
	case '/':
		avg = su1 / su2;
		printf("������� %.3f�Դϴ�.", avg); break;
	default :
		printf("?????");
	}*/
}