#include <iostream>
#include <memory>

using namespace std;

class object {
public:
    object(){
        cout<<"출력1이 되었습니다."<<endl;
    }
   ~object(){
        cout<<"해제되었습니다."<<endl;
    }  
    void function(){
        cout << "호출합니다." << endl;
    }
};

int main() {
    unique_ptr<object> smart_pointer(new object());
    smart_pointer->function();

    return 0;
}
