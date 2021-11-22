/*(실습 2) 실습 1에서 구현한 swap template이 std::string 타입의 입력 또한 처리 가능하도록 코드를 추가하세요 (힌트: template specialization)*/

#include <iostream>

template <typename T>
void swap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}
template<>
void swap(std::string& a, std::string& b){
	std::string temp = a;
	a = b;
	b = temp;
}

int main() {
	int a = 1;
	int b = 2;
	float c = 3.3;
	float d = 4.4;
	std::string e = "World";
	std::string f = "Hello";

	swap<int>(a, b); //swap(a,b)도 가능
	swap<float>(c, d); //swap(c,d)도 가능

   //(추가) e, f의 swap이 가능하도록 swap template 호출
	swap<>(e, f);


	std::cout << "a: " << a << ", b: " << b << std::endl;
	std::cout << "c: " << c << ", d: " << d << std::endl;
	std::cout << "e: " << e << ", f: " << f << std::endl;

	return 0;
}
