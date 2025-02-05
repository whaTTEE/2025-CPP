#include <iostream>
using namespace std;

void print(int x) {
    cout << "정수: " << x << endl;
}

void print(int x, int y) {
    cout << "정수 두 개: " << x << ", " << y << endl;
}

// 매개변수 타입 다르기
void print(double x) {
    cout << "실수: " << x << endl;
}

int main() {
    print(5);       // 정수 출력
    print(3, 4);    // 두 개의 정수 출력
    print(3.14);    // 실수 출력
    return 0;
}
