#include <iostream>
#include <string>
using namespace std;
char variable;

int main(){
    cin >> variable; 
    switch(variable){
        case 'r': {
            cout << "1";
        }
        case 'T': {
            cout << "2";
        }
        default: {
            cout << "default";
        }
    }
    return 0;
}
