#include <iostream>
#include <string>

class Student {
private:
	std::string rollNo;
	std::string name;

public:
	virtual std::string getRollNo() {
		return rollNo;
	}

	virtual void setRollNo(std::string& rollNo) {
		this->rollNo = rollNo;
	}

	virtual std::string getName() {
		return name;
	}

	virtual void setName(std::string& name) {
		this->name = name;
	}
};


class StudentView {
public:
	virtual void printStudentDetails(std::string& studentName, std::string& studentRollNo) {
		std::cout << "Student: " << std::endl;
		std::cout << "Name: " << studentName << std::endl;
		std::cout << "Roll No: " << studentRollNo << std::endl;
	}
};

class StudentController {
private:
	Student* model;
	StudentView* view;

public:
	virtual ~StudentController() {
		delete model;
		delete view;
	}

	StudentController(Student* model, StudentView* view) {
		this->model = model;
		this->view = view;
	}

	virtual void setStudentName(std::string& name) {
		model->setName(name);
	}

	virtual std::string getStudentName() {
		return model->getName();
	}

	virtual void setStudentRollNo(std::string& rollNo) {
		model->setRollNo(rollNo);
	}

	virtual std::string getStudentRollNo() {
		return model->getRollNo();
	}

	virtual void updateView() {
		view->printStudentDetails(model->getName(), model->getRollNo());
	}
};




int main()
{
	Student* model = retriveStudentFromDatabase();
	static Student* retriveStudentFromDatabase() {
		Student* student = new Student();
		student->setName("Robert");
		student->setRollNo("10");

		return student;
	}

	StudentView* view = new StudentView();

	StudentController* controller = new StudentController(model, view){
	   this->model = model;
	   this->view = view;
	}
	controller->updateView();

	controller->setStudentName("John");

	controller->updateView();

	return 0;
}
