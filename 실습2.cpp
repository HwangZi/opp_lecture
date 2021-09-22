//(실습 2) 위의 코드를 C 코드로 변경해 보자(100자 이내로 입력된다고 가정하고 별도의 예외 처리는 하지 않아도 됨)


#include <stdio.h>

int main(void) {
	String str;
	printf("문자를 입력하세요(100자 이내).");
	scanf("%s", str);
	printf("입력된 문자는 %s입니다.", str)

	return 0;
}