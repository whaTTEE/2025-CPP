#include <iostream>
using namespace std;

void function(int *x){ // 포인터 변수를 매개변수로 사용
if (*x > 0)
{
    *x = -(*x);
}
}

int main() {
    int a = 3, b = 5;
    function(&a);
    function(&b);

    cout<< a << " " << b << endl;
   return 0;
}
