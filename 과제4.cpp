/* (���� 4) �Ʒ� ���α׷��� �����ڸ� �ۼ��Ͽ� ���������� �����ϵ��� �����غ���. */


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
