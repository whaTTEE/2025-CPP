#include <iostream>
using namespace std;

template <typename car>
car function(car var1, car var2){
    return var1 + var2;
}

int main(){
    int d1 = 5, d2 = 10;
    double d3 = 3.1, d4 = 7.4;
    string d5 = "Hi", d6 = "Bye";

    cout << function(d1,d2) << endl;
    cout << function(d3,d4) << endl;
    cout << function(d5,d6) << endl;
}

