#include<stdio.h>
void main15_1() {
	int var1;
	int var2;

	printf("������ �ڿ��� �ϳ��� �Է��ϼ���>>>");
	scanf_s("%d", &var1);
	
	printf("�� �ٸ� ������ �ڿ��� �ϳ��� �Է��ϼ���>>>");
	scanf_s("%d", &var2);
	
	printf("�� �ڿ����� ���� %d�̾�.", var1 + var2);
	printf("\n�� �ڿ����� ���� %d�̾�", var1 - var2);
	printf("\n�� �ڿ����� ���� %d�̾�", var1 * var2);
	printf("\n�� �ڿ����� �������� %d�̾�", var1 / var2);
	printf("\n�� �ڿ����� �������� ���� �������� %d�̾�", var1 % var2);

}