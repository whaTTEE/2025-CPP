#include <iostream>
using namespace std;

int main() {
    
    try{
        int a = 0;
        int b = 10;
        if (a==0){
            throw "오류 발생";
        }
          cout << a/b << endl;
    }

        catch(const char*variable){
            cout << variable << endl;
        }
    
}

//try문 안에서 예외 발생시에 catch문으로 던짐
