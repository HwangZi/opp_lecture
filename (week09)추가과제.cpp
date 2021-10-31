
#include <iostream>


class Shape
{
public:
	virtual void draw() = 0;
};
class RoundedRectangle : public Shape
{
public:
	void draw() override {
		std::cout << "Inside RoundedRectangle::draw() method." << std::endl;
	}
};
class RoundedSquare : public Shape
{
public:
	void draw() override {
		std::cout << "Inside RoundedSquare::draw() method." << std::endl;
	}
};
class Rectangle : public Shape
{
public:
	void draw() override {
		std::cout << "Inside Rectangle::draw() method." << std::endl;
	}
};
class Square : public Shape
{
public:
	void draw() override {
		std::cout << "Inside Square::draw() method." << std::endl;
	}
};







class AbstractFactory
{
public:
	virtual Shape* getShape(const std::string& shapeType) = 0;
};


class ShapeFactory : public AbstractFactory
{
public:
	Shape* getShape(const std::string& shapeType) {
		if (shapeType._Equal("RECTANGLE"))
		{
			return new RoundedRectangle();
		}
		else if (shapeType._Equal("SQUARE"))
		{
			return new RoundedSquare();
		}
		return nullptr;
	}
};
class RoundedShapeFactory : public AbstractFactory
{
public:
	Shape* getShape(const std::string& shapeType) {
		if (shapeType._Equal("RECTANGLE"))
		{
			return new RoundedRectangle();
		}
		else if (shapeType._Equal("SQUARE"))
		{
			return new RoundedSquare();
		}
		return nullptr;
	}
};
class FactoryProducer
{
public:
	static AbstractFactory* getFactory(bool rounded) {
		if (rounded) {
			return new RoundedShapeFactory();
		}
		else {
			return new ShapeFactory();
		}
	}
};




int main() {
	AbstractFactory* shapeFactory = FactoryProducer::getFactory(false);
	Shape* shape1 = shapeFactory->getShape("RECTANGLE");
	shape1->draw();
	Shape* shape2 = shapeFactory->getShape("SQUARE");
	shape2->draw();

	AbstractFactory* shapeFactory1 = FactoryProducer::getFactory(true);
	Shape* shape3 = shapeFactory1->getShape("RECTANGLE");
	shape3->draw();
	Shape* shape4 = shapeFactory1->getShape("SQUARE");
	shape4->draw();
}

