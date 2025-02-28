#include <iostream>
using namespace std;

class bank {
private:
    int safe;

public:

void fuction(int in, int out)
{
    safe += in;
    safe -= out;
    cout << in << "만큼 들어왔고" << out << "만큼 나갑니다." << endl;
}

bank(){
    safe = 1000;
    cout << "최초 잔고 : " << safe << endl; 
}
};

int main() {
bank uri;
    uri.fuction(30,20);


    
    return 0;
        }

