#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 벡터 초기화
    vector<int> myVector = {10, 20, 30, 40, 50};
    
    // erase() 예시: 특정 원소 삭제 (두 번째 원소 20 삭제)
    myVector.erase(myVector.begin() + 1);  // 20이 삭제됨
    
    cout << "After erase():" << endl;
    for (int num : myVector) {
        cout << num << " ";
    }
    cout << endl;
    
    // insert() 예시: 원소 추가 (두 번째 위치에 15 삽입)
    myVector.insert(myVector.begin() + 1, 15);  // 15가 20 위치에 삽입됨
    
    cout << "After insert():" << endl;
    for (int num : myVector) {
        cout << num << " ";
    }
    cout << endl;

    // insert() 예시: 여러 원소 삽입 (세 번째 위치에 100, 200 두 원소 삽입)
    myVector.insert(myVector.begin() + 2, {100, 200});
    
    cout << "After insert() multiple elements:" << endl;
    for (int num : myVector) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
