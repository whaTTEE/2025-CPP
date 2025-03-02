#include <iostream>
#include <string>
using namespace std;

class car {
private:
    string color;
    int option;
public:
   string name;
  car(string a, string b, int c)
{
        name = a;
        color = b;
        option = c;
}

    virtual void change()
{
        cout << name << endl;
};

void call(){
 cout<< name << " " << color << " " << option << endl;
}
};

class autonomous : public car {
public:
    autonomous(string a, string b, int c) : car(a, b, c){}

    void change() override{
        cout << "autonomous car : "<< name << endl;
    }
};

int main() {
    car car1("ionique5","white",10);
    car1.call();
    autonomous car2("ionique5-waymo","white",15);
    car2.call();
    car2.change();
    
    return 0;
}
