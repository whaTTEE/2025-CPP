#include <iostream>
using namespace std;

class Engine {
public:
    void start() {
        cout << "Engine started!" << endl;
    }
};

class Wheels {
public:
    void rotate() {
        cout << "Wheels are rotating!" << endl;
    }
};

class Car : public Engine, public Wheels {
public:
    Car(){cout <<"객체 생성됨"<< endl;}
 ~Car(){cout <<"객체 제거됨"<< endl;}

    void drive() {
        cout << "Car is driving!" << endl;
    }
};

int main() {
    Car myCar;
    myCar.start();      // Engine의 메서드
    myCar.rotate();     // Wheels의 메서드
    myCar.drive();      // Car의 메서드

    return 0;
}
