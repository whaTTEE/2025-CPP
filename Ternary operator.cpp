#include <iostream>

using namespace std;

int main()
{
    int a = 13;
    int b = 25;
    int k = (b > a) ? a : b;
    cout << k;

    return 0;
}

// (조건식) ? 변수1 : 변수2;
