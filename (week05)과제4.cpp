/* (과제 4) 아래 프로그램에 생성자를 작성하여 정상적으로 동작하도록 수정해보자. */


#include <iostream>

class Test {

public:
	Test(int x, int y) {
		this->num1 = x;
		this->num2 = y;
	}

	int num1;
	int num2;

	void print() {
		std::cout << "num1 : " << num1 << std::endl;
		std::cout << "num2 : " << num2 << std::endl;
	}

};

int main() {

	Test a = Test(1, 3);
	a.print();

}
