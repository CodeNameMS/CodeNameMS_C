// ch27_struct-function.c

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct academy {
	int no;   // ��ȣ
	int cpp;  // ����
	int java; // ����
	int tot;  // ����
}Academy;

//----------  �Լ�  ����  ----------//
Academy CalcTot(Academy man);
void ShowAcademy(Academy man);
void InputData(Academy arr[], int length);
void PointTot(Academy* man);
void OutputData(Academy arr[], int length);
void ShowTitle();
int FindTop(Academy arr[], int length);
void ShowTop(Academy arr[], int top);
void CurrentStu(Academy man);

//----------    main    ----------//

int main() {

	//Academy man = { 1, 90, 87 };
	//man = CalcTot(man);
	//ShowAcademy(man);

	Academy stu[3];
	int stu_length = sizeof(stu) / sizeof(Academy);

	InputData(stu, stu_length);
	OutputData(stu, stu_length);

	// ������ ���� ���� �л��� ��ġ�� ã�Ƽ� ��ȯ�ϴ� �Լ��� �����ϼ���
	int topIdx = FindTop(stu, stu_length);

	// ������ ���� ���� �л��� ������ ����ϴ� �Լ��� �����ϼ���
	ShowTop(stu, topIdx);
	
	
}

//----------  �Լ�  ����  ----------//

void ShowTop(Academy arr[], int top) {
	puts("--- �� �� �� �� �� �� ---");
	CurrentStu(arr[top]);
}

int FindTop(Academy arr[], int length) {
	int top = 0;	// ������ ���� ���� �л� ��ġ
	for (int i = 1; i < length; i++) {
		if (arr[i].tot > arr[top].tot)
			top = i;
	}
	return top;
}

void ShowTitle() {
	printf("%4s %8s %8s %8s\n", "��ȣ", "CPP", "JAVA", "����");
}

void CurrentStu(Academy man) {
	printf("%4d %8d %8d %8d\n", man.no, man.cpp, man.java, man.tot);
}

void CurrentPoiunt(Academy* man) {
	printf("%4d %8d %8d %8d\n", man->no, man->cpp, man->java, man->tot);
}

void OutputData(Academy arr[], int length) {
	puts("--- �� �� �� �� ---");
	ShowTitle();
	for (int i = 0; i < length; i++) {
		CurrentStu(arr[i]);
		//CurrentPoint(arr + i);
	}
}

void PointTot(Academy* man) {
	man->tot = man->cpp + man->java;
}

void InputData(Academy arr[], int length) {
	srand((unsigned int)time(NULL));
	puts("--- �� �� �� �� ---");
	for (int i = 0; i < length; i++) {
		arr[i].no = i + 1;
		arr[i].cpp = rand() % 91 + 10;
		arr[i].java = rand() % 91 + 10;
		PointTot(arr + i);// PointTot(&arr[i]);
		
	}
}

Academy CalcTot(Academy man) {
	man.tot = man.cpp + man.java;
	return man;
}

void ShowAcademy(Academy man) {
	printf("��ȣ : %d\n", man.no);
	printf("CPP : %d\n", man.cpp);
	printf("JAVA : %d\n", man.java);
	printf("���� : %d\n", man.tot);
}