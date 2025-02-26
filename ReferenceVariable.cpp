#include <iostream>
#include <string>
using namespace std;

void swap(int &a, int &b){
    cout << a << " " << b << endl;

    int variable = a;
    a = b;
    b = variable;

    cout << a << " " << b << endl;
}

int main(){
    int a = 5, b = 7;
    cout << a << " " << b << endl;
    swap(a, b);
    cout << a << " " << b << endl;

    
    
return 0;
}



