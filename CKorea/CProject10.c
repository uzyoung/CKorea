#include<stdio.h>

void main10()
{
	//���� ���� ���� �Է� �޾Ƽ�
	//������ ���

	//����1, ����2:�Է¹޾Ƽ�
	//���ϱ� ���� ���ϱ� ������

	int Korean;
	int math;
	int English;

	scanf_s("%d", &Korean);
	scanf_s("\n%d",&math);
	scanf_s("\n%d",&English);

	int sum = Korean + math + English;

	printf("���������� %d�� �Դϴ�!.", Korean);
	printf("\n���������� %d�� �Դϴ�!", math);
	printf("\n���������� %d���Դϴ�!", English);
	printf("\n������ %d���Դϴ�.", sum);

	int num1;
	int num2;
	
	scanf_s("%d", &num1);
	scanf_s("%d",&num2);

	printf("�� ���� ���� %d�Դϴ�.", num1 + num2);
	printf("�� ���� ���� %d�Դϴ�.", num1 - num2);
	printf("�� ���� ���� %d�Դϴ�.", num1 * num2);
	printf("�� ���� �������� %d�Դϴ�.", num1 / num2);


}