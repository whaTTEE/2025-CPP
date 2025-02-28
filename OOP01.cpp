#include <iostream>
using namespace std;

class car{
    private:
    string color;
    string name;
    int option;
    
    public:
    car(string a, string b, int c) {
        color = a;
        name = b;
        option = c;
    }

    void function()
    {
        cout << color << " " << name << " " << option << endl;
    }
};

int main() {
    car ionique5("white","ionique5",3);
    
    ionique5.function();

    return 0;
        }

