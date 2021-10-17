/* (과제 4) 아래 코드를 실행해보고 결과를 분석해 보세요 (Stack unwinding에 관한 내용). */


#include <iostream>
#include <stdexcept>

class Test {
public:
    Test(char id) : id_(id) {}
    ~Test() {
        std::cout << "Destructor execution: "
            << id_ << std::endl;
    }

private:
    char id_;
};

int funcB() {
    Test r('B');
    throw std::runtime_error("Exception from funcB!\n");
    std::cout << "Executed in B" << std::endl;
}
int funcA() {
    Test r('A');
    funcB();
    std::cout << "Executed in A" << std::endl;
    return 0;
}
int main() {
    try {
        funcA();
    }
    catch (std::exception& e) {
        std::cout << "Exception : " << e.what();
    }
}
