/* (과제 2)  아래 프로그램은 main 함수에서 고양이 cat1 오브젝트를 생성한 후에 eat()를 호출할 경우, eat()의 인자로 전달된 값만큼 cat1.weight 값이 증가하는 프로그램이다.
	eat 함수를 추가하여 프로그램을 완성하세요. (힌트, this키워드와 레퍼런스 사용)*/


#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class My_cat {
	char* name;
	int weight;


public:
	My_cat();
	My_cat(const char* name);
	My_cat(const My_cat& cat);
	~My_cat();

	//eat 함수 선언하시오
	My_cat& eat(int number);

	void show_status() const;
};

My_cat::My_cat() :name(NULL), weight(10) { }

My_cat::My_cat(const char* cat_name) : weight(10) {
	name = new char[strlen(cat_name) + 1];
	strcpy(name, cat_name);
}

My_cat::My_cat(const My_cat& cat) : weight(10) { //Copy constructor
	std::cout << "Copy constructor invocation ! " << std::endl;
	name = new char[strlen(cat.name) + 1];
	strcpy(name, cat.name);
}

My_cat::~My_cat() {		//Destructor
	if (name) delete[] name;
}
//eat 함수를 구현하세요.
My_cat& My_cat::eat(int number) {
	weight += number;
	return *this;
}


void My_cat::show_status() const {
	std::cout << " Weight : " << weight << std::endl;
}

int main() {
	My_cat cat1("Nabi");	//Cat 1 생성
	cat1.show_status();

	cat1.eat(4);
	cat1.show_status();

	cat1.eat(4);
	cat1.show_status();

	cat1.eat(4).eat(5).eat(6); //hint: 이런 형태의 연산 지원을 위해서는 this 키워드와 레퍼런스 활용이 요구됨
	cat1.show_status();

	getchar();
	return 0;
}
