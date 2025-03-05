#include <iostream>
using namespace std;

template <typename LEE>
   LEE function (LEE a, LEE b){
        return a + b;
    }

int main() {
    int d1 = 3, d2 = 5;
    double d3 = 3.5, d4 = 2.5;
    string d5 = "H", d6 = "C";
    
    cout << function(d1, d2) << endl;
    cout << function(d3, d4) << endl;
    cout << function(d5, d6) << endl;

    return 0;
}
