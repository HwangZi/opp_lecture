//(과제2)아래 코드의 컴파일 에러를 수정하시오.단, x의 타입(레퍼런스)을 유지해야함.


#include <iostream> 

int main()
{
	int a = 5;
	int& x = a;
	std::cout << x << std::endl;
}
