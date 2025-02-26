#include <iostream>
#include <string>
using namespace std;

void swap(int a, int b){
    cout << a << " " << b << endl;

    int variable = a;
    a = b;
    b = variable;

    cout << a << " " << b << endl;
}



int main(){
    swap(3, 7);
return 0;
}


