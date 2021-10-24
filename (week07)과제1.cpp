/* (과제 1) 강의자료 p30~33의 strategy 디자인 패턴 적용 JAVA 프로그램을 동일한 로직을 수행하는 C++ 프로그램으로 변환하여 작성하시오
(각 클래스를 하나의 cpp파일에 병합하여 작성하여도 무방).*/


#include <iostream>
using namespace std;

//doOpertion을 갖고 부모가 되는 Strategy클래스
class Strategy
{
public:
    virtual int doOperation(int num1, int num2) = 0;
};

//Strategy를 상속받아 각각 doOperation 재정의
class OperationAdd : public Strategy {
public : 
    int doOperation(int num1, int num2) override {
        return num1 + num2;
    }
};

class OperationSubstract : public Strategy {
public:
    int doOperation(int num1, int num2) override {
        return num1 - num2;
    }
};

class OperationMultiply : public Strategy {
public:
    int doOperation(int num1, int num2) override {
        return num1 * num2;
    }
};



/*캡슐화 가능하도록 객체 strategy는 private로 생성하고 다른 건 기존 자바코드랑 비슷함
  소멸자도 만들어주고 재정의할 것이므로 virtual 사용
*/
class Context
{
private:
    Strategy* strategy;
   
public:
    ~Context()
    {
        delete strategy;
    }

    Context(Strategy* strategy) {
        this -> strategy = strategy;
    }
    virtual int executeStrategy(int num1, int num2) {
        return strategy -> doOperation(num1, num2);
    }
};



//context객체를 만들고 각각의 연산을 인자로 넣어 그 인자가 각각의 활동을 하도록 넣어줌
int main()
{
    Context* context = new Context(new OperationAdd);
    std::cout << "10 + 5 = " << context->executeStrategy(10, 5) << std::endl;
    context = new Context(new OperationSubstract);
    std::cout << "10 - 5 = " << context->executeStrategy(10, 5) << std::endl;
    context = new Context(new OperationMultiply);
    std::cout << "10 * 5 = " << context->executeStrategy(10, 5) << std::endl;


    return 0;
}
