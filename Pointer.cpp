#include <iostream>

using namespace std;

int main()
{
    char char_value ='A';
    char *char_pointer_value = &char_value;
    cout << char_pointer_value << endl;
    
    return 0;
}

// 포인터는 메모리 주소를 저장하는 변수, 타입과 변수 사이에 *을 넣음 
// &는 변수의 주소를 얻는데 사용하는 연산자
