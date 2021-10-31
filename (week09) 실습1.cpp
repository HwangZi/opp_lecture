/* (실습 1) 아래 코드의 컴파일 에러 원인을 생각해 보세요.Derived Class를 수정하여 컴파일 되도록 해보세요. */


class Base {
public:
	void func_1() {};
protected:
	void func_2() {};
private:
	int x_;
};

class Derived : public  Base {
public:
	void func_3() {
		func_1();
		func_2();
	}
};

int main() {
	Derived d;
	d.func_3();
	d.func_1();
}
