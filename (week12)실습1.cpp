/* (실습1)아래 코드를 실행해 보고 template을 활용하여 swapXX 함수를 간소화 해 보시오.즉, swapInt와 swapFloat를 template 형태(template swap)로 변환하시오. */

#include <iostream>

template <typename T>
void swapXX(T& a, T& b) {
		T temp = a;
		a = b;
		b = temp;
}




int main() {
	int a = 1;
	int b = 2;
	float c = 3.3;
	float d = 4.4;

	swapXX(a, b);
	swapXX(c, d);

	std::cout << "a: " << a << ", b: " << b << std::endl;
	std::cout << "c: " << c << ", d: " << d << std::endl;
	return 0;
}
