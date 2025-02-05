#include <iostream>

class Simple {
private:
    int value;

public:
    Simple(int value) {
        this->value = value; // this 포인터 사용
    }

    void show() {
        std::cout << "Value: " << this->value << std::endl;
    }
};

int main() {
    Simple obj(10);
    obj.show(); // 출력: Value: 10

    return 0;
}
