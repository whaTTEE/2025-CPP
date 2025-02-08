#include <iostream>
using namespace std;

class Mom {
public:
    virtual void doSomething() {  // 👩‍👦 가상 함수 (virtual function)
        cout << "엄마: 공부해!" << endl;
    }
};

class Son : public Mom {
public:
    void doSomething() override {  // 🧑‍💻 아들이 함수 내용을 바꿈!
        cout << "아들: 게임해!" << endl;
    }
};

int main() {
    Mom* person = new Son();  // 🧑‍💻 엄마 타입의 포인터지만, 실제 객체는 아들!
    person->doSomething();    // 🔥 실행 결과는 "아들: 게임해!" (자식 함수가 호출됨)
    delete person;
}
