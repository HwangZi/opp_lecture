/*(����3)�Ʒ� �ڵ��� swap �Լ��� ��ǲ �Ķ���͸� ���� �ٲٴ� ������ �Ѵ�.
���������� �����ϵ��� ���α׷��� �����ϼ���. (��Ʈ: ���۷��� Ȱ��) */


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
