#include <iostream>
#include <exception>

void my_terminate_handler() {
    // 예외를 처리할 수 없어서 프로그램이 종료된다는 메시지를 출력
    std::cout << "예외를 처리할 수 없어서 프로그램이 종료됩니다." << std::endl;
    std::abort();  // 강제 종료
}

void testFunction() {
    throw std::runtime_error("예외가 발생했습니다.");
}

int main() {
    // 종료 처리 함수 설정
    std::set_terminate(my_terminate_handler);
    
    // 예외가 발생하지만 catch가 없어서 terminate() 호출
    testFunction();  // 이곳에서 예외가 던져짐

    return 0;
}
