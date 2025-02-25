#include <iostream>
using namespace std;

int main() {
    int a = 10;      // 일반 변수
    int* ptr = &a;   // 포인터 변수 ptr에 a의 주소 저장

    cout << "a의 값: " << a << endl;       // 출력: 10
    cout << "ptr이 가리키는 값: " << *ptr << endl; // 출력: 10

    *ptr = 20;  // ptr이 가리키는 주소의 값을 변경 (a의 값이 변경됨)
    cout << "변경된 a의 값: " << a << endl; // 출력: 20

    return 0;
}

// 역참조 연산자 *을 사용하여 a의 값을 변화시킴
