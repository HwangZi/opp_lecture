/* (실습 2) 아래 코드에서 Derived class는 Base1, Base2를 상속 받는다.이때, 각 클래스의 생성자가 호출되는 순서는 무엇인가 ? */


#include <vector>
#include <string>
#include <iostream>

class Base1 {
public:
	Base1(int n) : vector_(n, 3) {
		std::cout << "Base1입니다" << std::endl;
	}
	//.....
private:
	std::vector<char> vector_;
};

class Base2 {
public:
	Base2(int n) : vector_(n, 3) {
		std::cout << "Base2입니다" << std::endl;
	}
	//.....
private:
	std::vector<char> vector_;
};

class Derived : public Base2, Base1 {
public:
	Derived(const std::string& str) : Base2(1024), Base1(512)
	{
		i = 0;
	}
	// ...
private:
	std::string str_;
	int i = 0;
};
int main() {
	Derived drv("1");
	return 0;
}
