#include <iostream>
using namespace std;


int main()
{
    for (char i = 32; i <= 126; i++){
        cout << i << ((i % 16 == 15) ? '\n' : ' ');
    }
    
    return 0;
}

//15,31,47 . . . 15개 입력 후 개행
