#include <iostream>
#include <random>
using namespace std;

int main() {
    mt19937_64 mt_rand;

    for (int i = 0; i < 10; i++) {
        cout << mt_rand() << endl;
    }
    
    return 0;
}

//random 헤더 파일을 이용하여 MT19937_64를 이용하여 난수 10줄을 출력하는 코드.
