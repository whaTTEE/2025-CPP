#include <iostream>
using namespace std;

int variable = 0; 

int main(){
    do{
        
        cout << variable << " 출력됨" << endl;
        variable++;
    }
    while(variable<3);
    return 0;
}

//조건이 틀려도 무조건 한 번은 실행 시키는 문
