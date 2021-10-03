/*(과제3)아래 코드의 swap 함수는 인풋 파라미터를 서로 바꾸는 역할을 한다.
정상적으로 동작하도록 프로그램을 수정하세요. (힌트: 레퍼런스 활용) */


#include<iostream>

void swap(int& first, int& second)
{
    int temp = first;
    first = second;
    second = temp;
}

int main()
{
    int a = 2, b = 3;
    int& x = a;
    int& y = b;
    swap(x, y);
    std::cout << a << " " << b << std::endl;
    return 0;
}
