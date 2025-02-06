#include <iostream>
using namespace std;

class Person {
private:
    int weight;  // 몸무게 (비공개)

public:
    Person(int w) { weight = w; }

    // 👨‍⚕️ Doctor 클래스가 내 비밀(몸무게)을 볼 수 있도록 친구 맺기!
    friend class Doctor;  
};

class Doctor {
public:
    void checkWeight(Person& p) {
        cout << "환자의 몸무게: " << p.weight << "kg 🩺" << endl;
    }
};

int main() {
    Person p(70);  // 몸무게 70kg인 사람
    Doctor doc;    // 의사 객체 생성

    doc.checkWeight(p);  // ✅ 의사가 몸무게를 확인할 수 있음!
    
    return 0;
}

