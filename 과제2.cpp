/* (���� 2) numberOfLeg�� ���ڷ� �޴� �����ڸ� �߰��� ��� ������ ������ �߻��Ͽ���. ������? ������ ���� ������ �غ���. */


/*	 �Ǵ°�

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
