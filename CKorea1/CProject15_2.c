#include<stdio.h>
void main15_2() {

/*int age = 21;
	if (age >= 20)
	{
		printf("�����Դϴ�!!!!!!!");
	}

	printf("\n���α׷��� �����մϴ�! "); 
*/	

	int value = 15;
	if (value > 10) {
		printf("value�� 10���� ū �� �Դϴ�.\n");

	}
	printf("���α׷��� �����մϴ�");

	int age;
	printf("���̸� �Է��ϼ���!!!!!!!!!!!>>>");
	scanf_s("%d", &age);
	
	if (age >= 20 && age<=200) {
		printf("�����̳�");
	}
	
	if (age >= 1 && age < 20) {
		printf("\n�̼����� �Դϴ�!");
	}
	
	if (age < 0 || age >200) {
		printf("\n?");
	}
}