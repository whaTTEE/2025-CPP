#include <iostream>
#include <vector>
#include <algorithm> //sort()를 사용하기 위해 추가

using namespace std;

int main(){
    vector<int> vec = {1,2,3};

    vec.push_back(500);
    vec.push_back(50);
    vec.push_back(6);
    vec.push_back(70);

    sort(vec.begin(), vec.end(),greater<int>());
    
    for(int i=0; i<7; i++){
    cout<< vec[i] <<endl;  
    }
}
