#include <iostream>
using namespace std;

class MyClass {
public:
    MyClass() {
        cout << "생성자: 객체가 만들어졌어요!" << endl;
    }
    
    ~MyClass() {
        cout << "소멸자: 객체가 사라졌어요!" << endl;
    }
};

int main() {
    MyClass obj;  // 여기서 객체가 생성되고, 생성자가 호출됨
    cout << "main 함수가 실행 중입니다!" << endl;

    // main 함수 끝나면 obj 객체가 소멸되고 소멸자가 호출됨
    return 0;
}
