// ch18_Quiz_string

#include <stdio.h>
#include <string.h>

int main() {

	//// �ΰ��� �ܾ �Է¹޾Ƽ�, �ܾ����(ASCII)�� ���� ������ ����ϴ� �ڵ带 �ۼ��ϼ���
	//char text1[10]; 
	//printf("ù��° �ܾ� �Է� : "); scanf_s("%s", &text1, sizeof(text1));
	//while (getchar() != '\n');
	//char text2[10];
	//printf("�ι�° �ܾ� �Է� : "); scanf_s("%s", &text2, sizeof(text2));
	//
	//if (strcmp(text1, text2)>=0) {
	//	printf("ascii�ڵ� ���� : %s  %s", text2, text1);
	//}
	//else {
	//	printf("ascii�ڵ� ���� : %s  %s", text1, text2);
	//}

	// �α��� ó�� �ڵ带 �����ϼ���
	// - �α��� Ȯ�νÿ� ����ϴ� id, pw �� �����մϴ�
	// �α��� id, pw �� �Է¹޾Ƽ� ������ �������� ��ġ�ϴ����� Ȯ���ؼ� �������θ� �˷��ݴϴ�

	//char id[10], id_use[10];
	//char pass[10], pass_use[10];

	//printf("���̵� ���� : "); scanf_s("%s", &id, sizeof(id));
	//printf("��й�ȣ ���� : "); scanf_s("%s", &pass, sizeof(pass));

	//printf("--------------- �α��� â ----------------\n");
	//printf("���̵� �Է� : "); scanf_s("%s", &id_use, sizeof(id_use));
	//printf("��й�ȣ �Է� : "); scanf_s("%s", &pass_use, sizeof(pass_use));
	//puts("");
	//if (!strcmp(id, id_use) && !strcmp(pass, pass_use)) {
	//	printf("%s���� �α��� �ϼ̽��ϴ�.\n", id);
	//}
	//else {
	//	printf("ID �Ǵ� ��й�ȣ �����Դϴ�. \n");
	//}


	// �ܾ� or ������ �Է¹ް�, �Է¹��� ���ڿ����� �˻��� ���� �ϳ��� �Է¹޽��ϴ�
	// �˻� ���ڰ� ���ڿ��� � �ִ����� ���ϴ� �ڵ带 �ۼ��ϼ���
	//char stn[100];
	//char search;
	//printf("�ܾ ���� �Է� : "); scanf_s("%s",&stn, sizeof(stn));
	//getchar();
	//printf("�˻��� ���� �Է� : "); search = getchar();

	//int count = 0;
	//for (int i = 0; i < strlen(stn); i++) {
	//	if (stn[i]==search) {
	//		count++;
	//	}
	//}
	//printf("���ڿ��� ���Ե� ���� : %d", count);
	//puts("");
	//// ���� ���ڿ��� ���ο� ���ڿ��� �Ųٷ� �����ϴ� �ڵ带 �ۼ��ϼ���
	//char reverse[100];
	//int ridx = strlen(stn) - 1; // ������ Null ���� ��ġ
	//for (int i = 0; i <= ridx; i++) {
	//	reverse[ridx - i] = stn[i];
	//}
	//reverse[ridx + 1] = '\0';
	//printf("%s", reverse);
}