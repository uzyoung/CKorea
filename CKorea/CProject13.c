#include<stdio.h>
void main13()
{
	//���ǿ�����
	//(3 > 1) ? printf("�³�"):printf("�ƴϳ�");
	//int age;
	//scanf_s("%d", &age);
	//(age > 19) ? printf("�����Դϴ�!") : printf("�̼������Դϴ�!");


	int age;
	printf("���̸� �Է��ϼ���!>>>");
	scanf_s("%d", &age);

	(age >= 20) ? printf("���̴� %d, ����� %d", age, 1250) : printf("���̴� %, ����� %d", age, 950);

	int age2;
	printf("\n���̸� �Է��ϼ���!>>>");
	scanf_s("%d", &age2);
	
	float height;
	printf("\n	Ű�� �Է��ϼ���!>>>");
	scanf_s("%f", &height);

	(age >= 12 && height >= 120) ? printf("\n	ž�� �����մϴ�!") : printf("\n	ž�� �Ұ����մϴ�!");




}