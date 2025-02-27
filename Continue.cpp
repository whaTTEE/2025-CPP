#include <iostream>
#include <string>
using namespace std;
char variable;

int main(){
    
for(int i = 0; i < 5; i++) {
    if(i == 2) {
        continue;  // i가 2일 때는 건너뜁니다.
    }
    cout << i << endl;
}

    
    return 0;
}
