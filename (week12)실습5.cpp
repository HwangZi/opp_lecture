#include <iostream>
#include <string>

class Student {
private:
	string rollNo;
	string name;

public:
	string getRollNo() {
		return rollNo;
	}

	void setRollNo(string& rollNo) {
		this->rollNo = rollNo;
	}

	string getName() {
		return name;
	}

	void setName(string& name) {
		this->name = name;
	}
};


class StudentView {
public:
	void printStudentDetails(string& studentName, string& studentRollNo) {
		std::cout << "Student: " << std::endl;
		std::cout << "Name: " << studentName << std::endl;
		std::cout << "Roll No: " << studentRollNo << std::endl;
	}
};

class StudentController {
private:
	Student model;
	StudentView view;

public:
	StudentController(Student model, StudentView view) {
		this->model = model;
		this->view = view;
	}

	void setStudentName(string& name) {
		model->setName(name);
	}

	string getStudentName() {
		return model->getName();
	}

	void setStudentRollNo(string& rollNo) {
		model->setRollNo(rollNo);
	}

	string getStudentRollNo() {
		return model->getRollNo();
	}

	void updateView() {
		view->printStudentDetails(model->getName(), model->getRollNo());
	}
};


static Student retriveStudentFromDatabase(){
	Student student = new Student();
	student->setName("Robert");
	student->setRollNo("10");

	return student;
}

int main()
{
	Student model = retriveStudentFromDatabase();

	StudentView view = new StudentView();

	StudentController controller(model, view);
	
	controller->updateView();

	controller->setStudentName("John");

	controller->updateView();

	return 0;
}
