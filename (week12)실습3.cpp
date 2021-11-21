/* (실습 3) 아래 코드의 컴파일 에러 원인을 알아보고 결과 값이 아래와 같도록 코드를 수정해 보세요.*/

#include <iostream>

template<typename T>
T min(T x, T y) {
	return x < y ? x : y;
}


template<typename T, typename V>
 T min(T x, V y) {
	return  x < y ? x : y;
}


int main() {
	int x = 3;
	int y = 2;
	double d = 2.1;
	double e = 3.3;
	std::cout << "min(x,y): " << min(x, y) << ", min(d,e): " << min(d, e) << ", min(d, x): " << min(d, x) << std::endl;
	return 0;
}
