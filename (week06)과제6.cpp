/* (과제 6) 아래의 코드가 오류 없이 동작하도록 코드를 수정해보세요.*/


#include <iostream>
using namespace std;

namespace ns {
	void display();
	class Test {
	public:
		void display();
	};
}

void ns::Test::display() { cout << "Test::display()\n"; }
void ns::display() { cout << "display()\n"; }

int main() {
	ns::Test obj;
	ns::display();
	obj.display();
	return 0;
}
