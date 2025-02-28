#include <iostream>
using namespace std;

void function(){
    throw 3;
}

int main() {
    try{
    function();
    }
    catch(int a) {  // 정수 예외 처리
        cout << a << "은 예외처리에서 던진 받은 값" << endl;
    }
     
    catch(...) {  // 모든 예외 처리
        cout << "이것은 어떤 예외나 다 받아서 출력되는 문장입니다." << endl;
    }

    return 0;
}
