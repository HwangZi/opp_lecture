/* (과제 2) numberOfLeg를 인자로 받는 생성자를 추가할 경우 컴파일 오류가 발생하였다. 이유는? 오류를 고쳐 컴파일 해보자. */


/*	 되는거

class Animal {
public:

private:
	int numberOfLeg;
};

int main() {
	Animal a;

	return 0;
}
*/

class Animal {
public:
	Animal(int numberOfLeg) {
		this->numberOfLeg = numberOfLeg;
	}
private:
	int numberOfLeg;
};

int main() {
	Animal a();

	return 0;
}
