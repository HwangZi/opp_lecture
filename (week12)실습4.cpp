/*(실습4)아래 코드의 실행 결과를 분석하시오(count 값 변화 추이의 이유를 생각해 보세요).*/

#include <iostream>
using namespace std;

template <typename T>
void fun(const T& x)
{
    static int count = 0;
    cout << "x = " << x << " count = " << count << endl;
    ++count;
    return;
}

int main()
{
    fun<int>(1);
    cout << endl;
    fun<int>(1);
    cout << endl;
    fun<double>(1.1);
    cout << endl;
    return 0;
}
