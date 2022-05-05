#include<stdio.h>

void main16() {

	/*int age;
	printf("나이를 입력하세요>>>");
	scanf_s("%d", &age);

	if (age >= 20) {
		printf("성인입니다");
	}else{
		printf("\n미성년자입니다!");
	}*/

	/*int age = 21;
	if (age >= 20) {
		printf("성인입니다.\n");
	}
	else {
		printf("미성년자 입니다.\n");
	}*/

	//quiz1

	int key = 0000;
	int password;
	printf("4자리 비밀번호를 입력하세요>>>");
	scanf_s("%d", &password);

	if (password == key) {
		printf("통과!!!!!!!");
	}
	else {
		printf("불통!!!!!!!!");
	}


	//quiz2
	int score;
	printf("\n성적을 입력하세용>>>");
	scanf_s("%d점", &score);

	if (score >= 90) {
		printf("A입니다.");
	}
	else if (score >= 80 && score < 90) {//어차피 90보다 작으므로 사실 score<90이 있을 필요가 없다!!!!
		printf("B입니다.");
	}
	else if (score >= 70 ) {
		printf("C입니다.");
	}
	else if(score>=60 ){
		printf("D입니다.");

	}
	else {
		printf("F입니다");
	}

	int score2;
	printf("\n수학 성적을 입력하세요>>>");
	scanf_s("%d", &score2);

	if (score2 <= 100) {
		printf("A");
		if (score2 < 90) {//이미 100보다 작음
			printf("B");
			if (score2 < 80) {//이미 90보다 작음
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

