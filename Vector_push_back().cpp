#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec= {1,2,3,4};
    vec.push_back(50);
    vec.push_back(60);
    vec.push_back(70);
    vec.push_back(80);
    
    for (int i = 0; i < 8; i++)
    cout << vec[i] << endl;
}
