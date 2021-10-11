/* (과제3)  연산자 오버로딩을 활용하여 아래 코드를 완성하세요. (operator+ 를 구현해야함) */


#include <iostream>
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

	//operator+ 추가하세요
	Animal operator+ (const Animal & a) {
		std::string memory;
		memory = name + a.name;
		return memory;
	}

};

int main() {

	Animal cat("Nabi");
	cat.showName();
	Animal dog("Jindo");
	dog.showName();

	Animal catDog = dog + cat; //개냥이 합성
	catDog.showName();

	dog.showName();

	getchar();

	return 0;
}
