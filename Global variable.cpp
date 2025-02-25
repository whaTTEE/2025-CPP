#include <iostream>
using namespace std;

int value = 28; // 전역변수

void function(){
    int value = 10;
    cout << value << endl;
}

int main()
{
   int value = 15;
    cout << value << endl;
    function();
    cout << value << endl;
    cout << ::value << endl; 
    
    return 0;
}

// function과 main 함수 내부의 지역 변수 value는 서로 영향을 주고 받지 않는다.
// 전역변수를 불러오려면 ::변수이름 해주면 된다.
