#include<stdio.h>

void main9(){

	int num1;//�Է��� ���ڸ� ���� ������ �ʿ��ϴ�.
	float num2;
	char c;
	char string[256];


	scanf_s("%d", &num1);
	scanf_s("%f", &num2);
	getchar();
	scanf_s("%c", &c, (int)sizeof(c));

	scanf_s("%s", &string, sizeof(string));

	printf("num1�� �� ���� %d�̴�.", num1);
	printf("num2�� �� ���ڴ� %f�̴�.", num2);
	printf("���ڿ� �� ���� %c�̴�.", c);
	printf("���ڿ��� �� ���� %s�̴�.", string);




		// scanf_s�� �Է��Լ�!!!!!

}