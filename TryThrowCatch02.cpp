#include <iostream>
using namespace std;

int main() {
    try
        {
            int input;
            cout << "입력한 값에 대한 예외는 : ";
            cin >> input;
    
    if (input < 0)
    {
        cout << "음수 예외처리" << endl;
        throw "minus";
    }

    if (input == 0)
    {
        cout << "0입니다." << endl;
        throw 1;
    }

    if (input > 0)
    {
        cout << "양수 예외처리" << endl;
        throw "plus";
    }
        }

    catch(int a)
        {
            cout<< "정수형 입력 예외를 받았음 : " << a << endl;
        }
    
    catch(...)
        {
        cout<<"모든 예외를 받았음" << endl;
        }

return 0;
}
