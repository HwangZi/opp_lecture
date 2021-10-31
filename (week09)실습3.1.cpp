/* 이러한 문제점은 업캐스팅 (Upcasting)을 활용하여 해결가능하다. 
즉, Employ의 주소를 저장하기 위한 배열을 생성하고, Manager, Intern, Janitor 오브젝트들을 해당 배열에서 통합 관리할 수 있다. 
아래 코드가 정상 동작할 수 있도록 코드를 수정하세요 (실습 3과 실행 결과가 동일해야 한다). 
*/


#include <iostream>
#include <string>

class Employee {
protected:
	std::string name;
	int age;

public:
	Employee(std::string name, int age) : name(name), age(age) {}

	virtual void showInfo() { std::cout << "Name:" << name << ", Age: " << age << std::endl; }
};

class Manager : public Employee {
	int managerBonus;
public:
	Manager(int managerBonus, std::string name, int age) : managerBonus(managerBonus), Employee(name, age) {
		this->managerBonus = managerBonus;
	}

	void showInfo() override{ std::cout << "Manager Name:" << name << ", Age: " << age << ", managerBonus:" << managerBonus << std::endl; }
};

class Intern : public Employee {
	std::string majorName;
public:
	Intern(std::string major, std::string name, int age) : majorName(major), Employee(name, age) {}

	void showInfo() { std::cout << "Intern Name:" << name << ", Age: " << age << ", Major:" << majorName << std::endl; }
};

class Janitor : public Employee {
	int salary;
public:
	Janitor(int salary, std::string name, int age) : salary(salary), Employee(name, age) {}

	void showInfo() { std::cout << "Janitor Name:" << name << ", Age: " << age << ", Salary:" << salary << std::endl; }
};

int main() {

	Employee** employeelist = new Employee * [6];

	
	Manager* myup0 = new Manager(200, "James", 33);
	Manager* myup1 = new Manager(150, "Chulsoo", 50);
	Intern* myup2 = new Intern("security", "Minsu", 24);
	Intern* myup3 = new Intern("HCI", "Yong", 19);
	Janitor* myup4 = new Janitor(100, "Black", 90);
	Janitor* myup5 = new Janitor(200, "White", 100);

	Employee* upup0 = myup0;
	Employee* upup1 = myup1;
	Employee* upup2 = myup2;
	Employee* upup3 = myup3;
	Employee* upup4 = myup4;
	Employee* upup5 = myup5;

	upup0->showInfo();
	upup1->showInfo();
	upup2->showInfo();
	upup3->showInfo();
	upup4->showInfo();
	upup5->showInfo();
	

	/*
	Employee* upup0 = new Manager(200, "James", 33);

	upup0->showInfo();
	*/
	getchar();
	return 0;
}
