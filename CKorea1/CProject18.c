#include <stdio.h>
void main(){
//{//보통 switch문은 같은 것을 찾을 때 사용된다.
//	switch (1) {
//	//switch의 소괄호안에 있는 값이 case안에 있는 값이 같으면 해당 코드를 실행한다.
//	case 0 :
//		printf("0");
//		break; //case별로 문장이 끝나면 반드시 break라는 것을 써야 한다. 안그러면 나머지 문장들도 실행돼버린다.
//	case 1:
//		printf("1");
//		break;
//	case 2:
//		printf("2");
//		break;
//	default:
//		printf("일치하는 값이 없음"); //default는 일치하는 것이 없을 때 사용된다.

int num = 2;
switch (num)
{
case 0:
	printf("선택은 0번입니다.");
	break;
case 1:
	printf("선택은 1번입니다.");
	break;
case 2:
	printf("선택은 2번입니다.");
	break;

default:
	printf("일치하는 번호가 없습니다");

}

}



	

