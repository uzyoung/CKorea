#include<stdio.h>

void main16() {

	/*int age;
	printf("���̸� �Է��ϼ���>>>");
	scanf_s("%d", &age);

	if (age >= 20) {
		printf("�����Դϴ�");
	}else{
		printf("\n�̼������Դϴ�!");
	}*/

	/*int age = 21;
	if (age >= 20) {
		printf("�����Դϴ�.\n");
	}
	else {
		printf("�̼����� �Դϴ�.\n");
	}*/

	//quiz1

	int key = 0000;
	int password;
	printf("4�ڸ� ��й�ȣ�� �Է��ϼ���>>>");
	scanf_s("%d", &password);

	if (password == key) {
		printf("���!!!!!!!");
	}
	else {
		printf("����!!!!!!!!");
	}


	//quiz2
	int score;
	printf("\n������ �Է��ϼ���>>>");
	scanf_s("%d��", &score);

	if (score >= 90) {
		printf("A�Դϴ�.");
	}
	else if (score >= 80 && score < 90) {//������ 90���� �����Ƿ� ��� score<90�� ���� �ʿ䰡 ����!!!!
		printf("B�Դϴ�.");
	}
	else if (score >= 70 ) {
		printf("C�Դϴ�.");
	}
	else if(score>=60 ){
		printf("D�Դϴ�.");

	}
	else {
		printf("F�Դϴ�");
	}

	int score2;
	printf("\n���� ������ �Է��ϼ���>>>");
	scanf_s("%d", &score2);

	if (score2 <= 100) {
		printf("A");
		if (score2 < 90) {//�̹� 100���� ����
			printf("B");
			if (score2 < 80) {//�̹� 90���� ����
				printf("C");
				if (score2 < 70) {
					printf("D");
					if (score2 < 60) {
						printf("F");

					}

				}
			}
		}
	}
	


	
}

