/* (과제 5)아래  C 스타일 예외처리 문을 try, catch, throw를 활용하여 바꾸어 보시오. 
(단, 예외는 out_of_range("Invalid Input!!")을 사용할것. main 함수의 catch 문에서 "Invalid Input"을 예외 인자로 받아 출력할것.) */


#include <iostream>

bool funcA() {
    int c;
    std::cin >> c;
    if (c < 10) //Let's assume this is exception
        return false;

    return true;
}
int main() {


    try
    {
        if (funcA()) {
            std::cout << "ok!!" << std::endl;
        }
        else {
            throw std::out_of_range::out_of_range("Invalid Input!!");
        }

    }
    catch (std::out_of_range& e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
