/* (과제 1) 코드를 수정하여 정상적으로 컴파일 하시오(힌트. virtual 키워드 활용) */


class Animal {
public:
    //...
protected:
    int age;
};
class Cat : public virtual Animal {/*.....*/ };
class Dog : public virtual Animal {/*....*/ };

class DogCat : public  Cat, public  Dog {
public:
    void setAge() {
        age = 10;
        Cat::age = 10;
    }
};

int main() {
    DogCat* dat = new DogCat();
    Animal* animal;
    animal = dat;
    animal = static_cast <Cat *>(dat);
    animal = (Cat*)dat;
}
