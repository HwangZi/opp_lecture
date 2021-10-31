/* (실습 5) 아래의 코드를 완성하여 주어진 출력이 나오도록 해보세요. */

#include <iostream> 
#include <vector> 
// 도형 
class Shape {
public:
	virtual void Draw() {
		std::cout << "Shape Draw" << std::endl;
	}
};

// 사각형 
class Rect : public Shape {
public:
	// write code
	void Draw() override {
		std::cout << "Rect Draw" << std::endl;
	}
};

// 원 
class Circle : public Shape {
public:
	// write code
	void Draw() override{
		std::cout << "Circle Draw" << std::endl;
	}
};

// 삼각형 
class triangle : public Shape {
public:
	// write code
	void Draw() override {
		std::cout << "Trinagle Draw" << std::endl;
	}
};

int main() {
	std::vector<Shape*> v1; // 도형 저장 버퍼 

	v1.push_back(new Rect);
	v1.push_back(new Circle);
	v1.push_back(new triangle);

	for (int i = 0; i < v1.size(); i++)
		v1[i]->Draw();

}
