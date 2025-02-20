#include <iostream>
#include <vector>
#include <algorithm> // std::copy를 사용하기 위해 포함

using namespace std; // std:: 생략 가능

int main() {
    // LiDAR 센서에서 수집한 거리 데이터
    vector<float> lidar_data = {3.5, 2.8, 4.1, 5.0, 6.3}; //동적 배열 형태로 언제든 크기를 늘릴 수 있는 장점이 있다.

    // 백업을 위한 벡터 생성 (크기 맞춰줌)
    vector<float> backup_data(lidar_data.size());

    copy(lidar_data.begin(), lidar_data.end(), backup_data.begin());
  // lida_data의 시작부터 끝까지의 데이터를 backup_data의 시작위치에 덮어쓴다는 의미
  // copy(시작, 끝, 대상_위치) 의미

    // 복사된 데이터 출력
    cout << "백업된 LiDAR 데이터: ";
    for (float d : backup_data) {
        cout << d << " ";
    }
    cout << endl;

    return 0;
}
