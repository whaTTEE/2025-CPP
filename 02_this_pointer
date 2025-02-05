#include <iostream>
using namespace std;  

class MyClass {
public:
    int value;
};

int main() {
    MyClass* obj = new MyClass();  // 동적으로 객체 생성 (TV 설치!)

    obj->value = 10;  // 값(채널) 설정
    cout << "현재 값: " << obj->value << endl;

    obj->value = 20;  // 값 변경
    cout << "변경된 값: " << obj->value << endl;

    delete obj;  // TV(객체) 제거
    return 0;
}

/*
< 쉽게 비유 >
1. new MyClass(); → 새 집(객체)을 힙 메모리에 짓는다!
2. MyClass* obj = → 집 주소(객체의 위치)를 obj라는 네비게이션(포인터)에 저장!
3. 즉, obj는 집(객체) 자체가 아니라, 그 집의 주소를 들고 있는 거야!

< 쉽게 비유 02 >
1. new로 집(객체)을 짓고 obj가 그 집 주소를 갖고 있음!
2. obj->value = 10; → 집 안에 있는 TV(값)를 10번 채널로 바꾼다!
*/
