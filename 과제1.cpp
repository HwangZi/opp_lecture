//(과제1) c++의 레퍼런스 (&)를 활용하여 increment 함수의 인풋값이 +1 증가하여 프린트되도록 수정해보세요


#include <iostream> 

void increment(int& x)
{
	++x;
}

int main()
{
	int x = 55;
	std::cout << " Before increment: " << x << std::endl;
	increment(x);
	std::cout << " After increment: " << x << std::endl;

	system("pause");
	return 0;
}
