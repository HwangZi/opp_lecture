//(�ǽ�3)�Ʒ� �ڵ带 ������ ����.��� ��(x)�� �����ΰ� ?

/* <�����ڵ�>
void increment(int x)
{
	++x;
}

���� �ڵ� : �ܼ��� int���� �޾Ƶ鿩�� ���� -> ����� : 55
*/


#include <iostream> 
//�ٲ��ڵ� (-> ���۷����� ����) -> ����� : 56
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
