#include <iostream>
#include <random>
using namespace std;

int main() {
    random_device rng;

    for (int i = 0; i < 10; i++){
        auto result = rng();
        cout << result << endl;;
    }
    return 0;
}

// random_device는 대체로 mt19937엔진보다 느림.
