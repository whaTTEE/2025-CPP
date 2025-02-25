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
// 전역변수를 불러오려면 ::변수이름 해주면 된다. 그러나, 전역변수는 접두사 'g_'를 붙여서 지역 변수와 구분해줘야한다. 전역 변수와 지역 변수를 같은 이름 사용하는 것은 피해야한다.
