#include <iostream>
using namespace std;

class base{
public:
virtual void function(){cout <<"가상함수 입니다." << endl;}
};

class derived : public base {
public:
    void function() override {
        cout << "overriding 성공" << endl;
    }
};

int main() {
derived A;
    A.function();
}
