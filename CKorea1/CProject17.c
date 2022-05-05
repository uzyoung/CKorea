#include<stdio.h>
void main17()
{
	/*int num = 15;


	if (num < 10) {
		printf("한자리수 \n");
	}
	else if (num < 100) {
		printf("두자리수 \n");
	}
	else if (num < 1000) {
		printf("세자리수\n");
	}
	else if (num < 10000) {
		printf("네자리수\n");
	}*/
	
	int year;
	printf("연도를 입력하세요>>>");
	scanf_s("%d", &year);
	if (year % 4 == 0 && year % 100 != 0 || year%400==0) 
	{
		printf("%d년은 윤년입니다.", year);
	}
	else {
		printf("%d년은 윤년이 아닙니다", year);

	}


}