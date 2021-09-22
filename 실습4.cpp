//(실습 4) 포인터를 이용해 결과값이 56이 되도록 변경.


#include <iostream> 

void increment(int* x)
{
	++*x;
}

int main()
{
	int x = 55;
	std::cout << " Before increment: " << x << std::endl;
	increment(&x);
	std::cout << " After increment: " << x << std::endl;

	system("pause");
	return 0;
}
