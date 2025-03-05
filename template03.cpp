#include <iostream>
using namespace std;

template <typename name>
name function(name a, name b){   
    return a + b;
}

int d1 = 3, d2 = 7;
string d3 = "H", d4 = "Q";
double d5 = 3.5, d6 = 6.7;

int main() {
    cout << function(d1,d2) << endl;   
    cout << function(d3,d4) << endl;   
    cout << function(d5,d6) << endl;   
    return 0;
}
