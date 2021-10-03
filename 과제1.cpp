/*(과제 1) 위 실습 1의 코드의 실행 결과 값이 10 이 되도록 foo 함수를 수정해 보세요.단, foo 함수 내부의 nested block(중첩 블럭) {} 을 이용할 것. */



#include <iostream>
using namespace std;

int i;

class A
{
public:
    ~A()
    {
        i = 10;
    }
};

int foo()
{
    i = 3;
    A ob;
    {
        A obb;
    }
    return i;
}

int main()
{
    cout << foo() << endl;
    return 0;
}
