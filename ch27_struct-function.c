// ch27_struct-function.c

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct academy {
	int no;   // 번호
	int cpp;  // 점수
	int java; // 점수
	int tot;  // 총점
}Academy;

//----------  함수  선언  ----------//
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

	// 총점이 가장 높은 학생의 위치를 찾아서 반환하는 함수를 구현하세요
	int topIdx = FindTop(stu, stu_length);

	// 총점이 가장 높은 학생의 성적을 출력하는 함수를 구현하세요
	ShowTop(stu, topIdx);
	
	
}

//----------  함수  정의  ----------//

void ShowTop(Academy arr[], int top) {
	puts("--- 최 고 점 수 학 생 ---");
	CurrentStu(arr[top]);
}

int FindTop(Academy arr[], int length) {
	int top = 0;	// 총점이 가장 높은 학생 위치
	for (int i = 1; i < length; i++) {
		if (arr[i].tot > arr[top].tot)
			top = i;
	}
	return top;
}

void ShowTitle() {
	printf("%4s %8s %8s %8s\n", "번호", "CPP", "JAVA", "총점");
}

void CurrentStu(Academy man) {
	printf("%4d %8d %8d %8d\n", man.no, man.cpp, man.java, man.tot);
}

void CurrentPoiunt(Academy* man) {
	printf("%4d %8d %8d %8d\n", man->no, man->cpp, man->java, man->tot);
}

void OutputData(Academy arr[], int length) {
	puts("--- 학 생 성 적 ---");
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
	puts("--- 점 수 입 력 ---");
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
	printf("번호 : %d\n", man.no);
	printf("CPP : %d\n", man.cpp);
	printf("JAVA : %d\n", man.java);
	printf("총점 : %d\n", man.tot);
}