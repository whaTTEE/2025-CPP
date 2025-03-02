#include <iostream>
#include <string>
using namespace std;

class car {
private:

    string name;
    string color;
    int option;

public:

  car(string a, string b, int c)
{
        name = a;
        color = b;
        option = c;
}

void call(){
 cout<< name << " " << color << " " << option << endl;
}
};

int main() {
    car car1("ionique5","white",10);
    car1.call();
    return 0;
}
