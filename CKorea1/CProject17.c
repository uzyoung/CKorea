#include<stdio.h>
void main17()
{
	/*int num = 15;


	if (num < 10) {
		printf("���ڸ��� \n");
	}
	else if (num < 100) {
		printf("���ڸ��� \n");
	}
	else if (num < 1000) {
		printf("���ڸ���\n");
	}
	else if (num < 10000) {
		printf("���ڸ���\n");
	}*/
	
	int year;
	printf("������ �Է��ϼ���>>>");
	scanf_s("%d", &year);
	if (year % 4 == 0 && year % 100 != 0 || year%400==0) 
	{
		printf("%d���� �����Դϴ�.", year);
	}
	else {
		printf("%d���� ������ �ƴմϴ�", year);

	}


}