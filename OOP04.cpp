#include <iostream>
using namespace std;

// 부모 클래스: 일반 자동차
class Car {
public:
    virtual void drive() { // 가상 함수 (Overriding 가능)
        cout << "운전자가 직접 운전합니다." << endl;
    }
};

// 자식 클래스: 자율주행 자동차
class SelfDrivingCar : public Car {
public:
    void drive() override { // 오버라이딩 (재정의)
        cout << "자율주행 모드로 운전합니다!" << endl;
    }
};

int main() {
    Car* car1 = new Car();             // 일반 자동차
    Car* car2 = new SelfDrivingCar();  // 자율주행 자동차 (부모 타입의 포인터)

    car1->drive();  // 부모 클래스의 drive() 호출
    car2->drive();  // 오버라이딩된 자식 클래스의 drive() 호출 (다형성 적용)

    delete car1;
    delete car2;

    return 0;
}
