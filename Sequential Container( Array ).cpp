#include <iostream>
#include <array>
using namespace std; // std:: 생략 가능


int main(){
array<int, 5> myArray = {1, 2, 3, 4, 5};
myArray = {11, 12, 13, 14, 15};

cout << myArray[1] << endl;

return 0;
}
