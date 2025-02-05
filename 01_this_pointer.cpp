#include <iostream>

class Simple {
private:
    int value;

public:
    Simple(int value) {
        this->value = value; // this ������ ���
    }

    void show() {
        std::cout << "Value: " << this->value << std::endl;
    }
};

int main() {
    Simple obj(10);
    obj.show(); // ���: Value: 10

    return 0;
}
