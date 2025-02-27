#include <iostream>
#include <string>
using namespace std;

void func()
{
    int a = 10;
    static int b = 10;

    a++;
    b++;

    cout << a << " " << b << endl;
}

int main(){
    func();
    func();
    func();
    func();
    func();
    func();

return 0;
}
