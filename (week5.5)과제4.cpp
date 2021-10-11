/* (과제 4) 아래 코드를 실행해 보세요. 그리고 과제3과 다른 결과가 출력된 이유에 대해 생각해 보세요.*/


#include <string>

class Animal {
private:
	std::string name;

public:
	Animal() {};
	Animal(std::string name) : name(name) {};

	void showName() {
		std::cout << "Name is " << name << std::endl;
	}

	Animal& operator+(const Animal& a) {
		name += a.name;
		return *this;
	}
};

int main() {

	Animal cat("Nabi");
	cat.showName();
	Animal dog("Jindo");
	dog.showName();

	Animal catDog = dog + cat;
	catDog.showName();
	dog.showName();

	getchar();

	return 0;
}
