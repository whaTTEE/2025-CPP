#include <iostream>
using namespace std;

class Car {
public:
    int speed = 0;

    // 참조를 반환하는 함수
    Car& accelerate() {
        speed += 10;  // 속도를 10 증가5
        cout << "현재 속도: " << speed << " km/h" << endl;
        return *this;  // 현재 객체 자신을 반환해서, 그 객체에 대해 연속적인 작업을 가능하게 함
    }
    Car& brake() {
        speed = 0;  // 속도를 0으로 리셋
        cout << "속도 0! 현재 속도: " << speed << " km/h" << endl;
        return *this;  // 자기 자신을 참조로 반환, 체이닝을 할 때 필수적인 코드 문장임
    }
};

int main() {
    Car myCar;  // 자동차 객체 생성

    myCar.accelerate().accelerate().brake();  // 함수 체이닝

    return 0;
}
