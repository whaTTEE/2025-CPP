#include <iostream>
#include <vector>
using namespace std; // std:: 생략 가능


int main(){
    vector<int> vec = {1, 2, 3, 4, 5};
    vec.push_back(18);

    cout << vec[5] << endl;

return 0;
}

// Vector는 Array와 달리 크기가 가변적으로 변한다는 장점이 있음, 필요에 따라 크기가 자동으로 조정됨.
