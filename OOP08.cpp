#include <iostream>
using namespace std;


class car {
private:


public:
string name;
int option;
string color;

car(string a){
    color = a;
    cout << a << endl;
}

    virtual void function(){
    cout << name << " " << option << endl;
    }
    void function2(){
     cout << color << endl;
    }

car(string a, int b){
    name = a;
    option = b;
car("-AI-");
}


};

class autonomous_car : public car{
public:
autonomous_car(string a, int b) : car(a, b){}

 void function() override{
    cout << name << " autonomous " << option << endl;
}
};

int main() {
    car car1("Ionique5",5);
    car car3("white");
    car1.function();
    car3.function2();
    autonomous_car car2("Autonomous-Ionique5",10);
    car2.function();
}
