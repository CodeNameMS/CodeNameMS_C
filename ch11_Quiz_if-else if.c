// ch11_Quiz_if-else if

#include <stdio.h>

int main() {

	//// ���̸� �Է¹޾� ���� ����� ������ �˷��ִ� �ڵ带 �ۼ�
	//// - ������(0~6) : 0, ���(7~13) : 450, �л�(17~19) : 729, �Ϲ� : 1250

	//int age;
	//printf("���̸� �Է��ϼ��� : "); scanf_s("%d", &age);
	//if (age < 7) {
	//	printf("������� 0�� �Դϴ�.");
	//}
	//else if (age < 14) {
	//	printf("������� 450�� �Դϴ�.");
	//}
	//else if (age > 16 && age < 20) {
	//	printf("������� 729�� �Դϴ�.");
	//}
	//else if (age >= 20)
	//	printf("������� 1250�� �Դϴ�.");
	//else
	//	printf("����!");
	

	//// �� ������ ������ ����� ����, ���, ������ ���ϴ� �ڵ� �ۼ�
	//// - ������ ����� ���
	////	> 100~90 : A, 89~80 : B, 79 ~70 : C, 69 ~ 60 : D, 59 ~ 0 : F

	//int math, kor, eng, hap = 0, avg = 0;
	//printf("�� ���� ���� �Է� : "); scanf_s("%d %d %d", &math, &kor, &eng);
	//hap = math + kor + eng;
	//avg = (math + kor + eng) / 3;
	//printf("���� : %d\n", hap);
	//printf("��� : %d\n", avg);

	//if (avg > 90 && avg <= 100)
	//	printf("���� : A\n");
	//else if (avg > 80)
	//	printf("���� : B\n");
	//else if (avg > 70)
	//	printf("���� : C\n");
	//else if (avg > 60)
	//	printf("���� : D\n");
	//else
	//	printf("���� : F\n");

	// ������(kg), Ű(cm)�� ����ؼ� BMI(ü��������)�� ���ϰ�, �����¸� �˷��ִ� �ڵ带 �ۼ�
	//           ������(kg)
	// - BMI ------------------
	//          Ű(m) * Ű(m)
	// bmi                       ������
	// 0    ~ 18.5 �̸�          ��ü��
	// 18.5 ~ 23.0 �̸�          ����
	// 23.0 ~ 25.0 �̸�          ��ü��
	// 25.0 ~ 30.0 �̸�          ��
	// 30.0 ~                    ����

	//double weight, height, bmi=0;
	//printf("������ �Է� : "); scanf_s("%lf", &weight);
	//printf("Ű �Է� : "); scanf_s("%lf", &height);

	//height = height / 100;
	//bmi = weight / (height * height);

	//if (bmi > 30.0)
	//	printf("����");
	//else if (bmi > 25.0)
	//	printf("��");
	//else if (bmi > 23.0)
	//	printf("��ü��");
	//else if (bmi > 18.5 && bmi >= 0)
	//	printf("����");
	//else
	//	printf("��� ����!");
}