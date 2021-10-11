/* (과제1)아래 코드는 고양이 오브젝트를 생성하는 프로그램이다. My_cat :show_status() 함수에서 총 고양이 갯수를 출력하고 싶다
number_of_cats 라는 변수를 My_cat 클래스에 선언하고 고양이 오브젝트가 생성될 때마다 그 값이 1씩 증가하도록 코드를 완성하시오.*/


#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


class My_cat {
	int age;
	char* name;
	int weight;
	static int number_of_cats;


public:
	My_cat();
	My_cat(int x, const char* name);
	My_cat(const My_cat& cat);
	~My_cat();

	void show_status() const;
};

int My_cat::number_of_cats = 0;

My_cat::My_cat() :age(20), name(NULL), weight(10) { 
	number_of_cats++;
}

My_cat::My_cat(int x, const char* cat_name) : weight(10) {
	age = x;
	name = new char[strlen(cat_name) + 1];
	number_of_cats++;

	strcpy(name, cat_name);
}

My_cat::My_cat(const My_cat& cat) :weight(10) { //Copy constructor
	std::cout << "Copy constructor invocation ! " << std::endl;
	age = cat.age;
	name = new char[strlen(cat.name) + 1];

	number_of_cats++;
	strcpy(name, cat.name);
}

My_cat::~My_cat() {		//Destructor
	if (name) delete[] name;
	number_of_cats--;
}

void My_cat::show_status() const {
	std::cout << "My Cat Name :: " << name << std::endl;
	std::cout << " Age : " << age << std::endl;
	std::cout << " Weight : " << weight << std::endl;
	std::cout << " Current Number of Cats : " << number_of_cats << std::endl;
}
int main() {
	My_cat cat1(3, "Nabi");	//Cat 1 생성
	cat1.show_status();

	My_cat cat2 = cat1;		//Cat 2 복사 생성
	cat2.show_status();

	My_cat cat3(4, "ToTo");	//Cat 3 생성
	cat3.show_status();


	getchar();
	return 0;
}
