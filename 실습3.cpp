//(실습3)아래 코드를 실행해 보자.결과 값(x)는 무엇인가 ?

/* <원래코드>
void increment(int x)
{
	++x;
}

원래 코드 : 단순히 int값을 받아들여서 증가 -> 결과값 : 55
*/


#include <iostream> 
//바꾼코드 (-> 레퍼런스로 수정) -> 결과값 : 56
void increment(int& x)
{
	++x;
}

int main()
{
	int x = 55;
	std::cout << " Before increment: " << x << std::endl;
	int& xx = x;
	increment(xx);
	std::cout << " After increment: " << x << std::endl;

	system("pause");
	return 0;
}
