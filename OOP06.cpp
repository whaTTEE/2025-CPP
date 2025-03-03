#include <iostream>
using namespace std;


class car {
private:


public:
string name;
int option;
car(string a, int b){
    name = a;
    option = b;
}
    virtual void function(){
    cout << name << " " << option << endl;
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
    car1.function();
    autonomous_car car2("Autonomous-Ionique5",10);
    car2.function();
    

}
