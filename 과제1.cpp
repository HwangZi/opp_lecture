/*(���� 1) �� �ǽ� 1�� �ڵ��� ���� ��� ���� 10 �� �ǵ��� foo �Լ��� ������ ������.��, foo �Լ� ������ nested block(��ø ��) {} �� �̿��� ��. */



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
