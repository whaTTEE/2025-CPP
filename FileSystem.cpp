#include <iostream>
#include <filesystem> // 파일 및 폴더(디렉터리) 작업을 위한 라이브러리
using namespace std;

namespace fs = std::filesystem; //std::filesystem을 fs로 줄여서 사용하겠다.

int main() {
    string filename = "test.txt"; // 파일 이름을 저장하는 문자열 변수 선언

    // 파일 생성
    ofstream(filename) << "Hello!"; // 파일을 만들고 "Hello!" 내용을 씀
    cout << "파일이 생성되었습니다." << endl;

    // 파일 존재 여부 확인
    if (fs::exists(filename)) // 파일이 존재하는지 확인
        cout << "파일이 존재합니다." << endl;

    // 파일 삭제
    fs::remove(filename);
    cout << "파일이 삭제되었습니다." << endl;

    return 0;
}
