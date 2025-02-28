#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "값을 입력하세요 : ";
    cin >> a;

    try {
        if (a < 0) {
            cout << "음수값을 입력했습니다." << endl;
            throw 3;  // 문자열 예외 던지기
        }
        
        throw 3;  // 정수 예외 던지기
    }
    
    catch(int a) {  // 정수 예외 처리
        cout << a << "은 예외처리에서 던진 받은 값" << endl;
    }
     
    catch(...) {  // 모든 예외 처리
        cout << "이것은 어떤 예외나 다 받아서 출력되는 문장입니다." << endl;
    }

    return 0;
}
