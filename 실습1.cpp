//(실습 1) 아래 C++ 코드를 실행하고 어떤 기능을 수행하는지 이해한다.


#include <string>
#include <iostream>

int main() {
	std::string s;
	std::cout << "문자를 입력하세요(100자 이내)." << std::endl;
	std::cin >> s;
	std::cout << "입력된 문자는 " << s << "입니다." << std::endl;

	//system("pause"); // keep terminal open
	return 0;
}

