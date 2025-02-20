#include <iostream>
#include <vector>
#include <algorithm>  // partial_sort 함수 사용을 위해 필요

using namespace std;

int main() {
    vector<int> data = {10, 50, 30, 40, 20, 60, 70};

    // 상위 3개 값만 정렬 (partial_sort)
    partial_sort(data.begin(), data.begin() + 3, data.end());

    // 부분 정렬된 결과 출력 (상위 3개 값만 정렬됨)
    for (int value : data) {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}
