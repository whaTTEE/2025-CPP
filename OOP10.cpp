#include <iostream>
using namespace std;

class Car{
    private:

    public:
    string name;
    string color;
    int option;
    Car(string a, string b, int c){
        name = a;
        color = b;
        option = c;
        cout << "입력하신 차량의 정보는 : " << name << " " << color << " " <<option <<endl;
    }
    virtual void function(){cout <<"문장출력확인!"<<endl;}
};

class autonomous : public Car{
    public:
    autonomous(string a, string b, int c) : Car(a, b, c){
    cout << "위 정보는 자율주행 차량입니다." << endl;
    }
    void function() override{
        cout << "바뀐문장출력확인!" << endl;
    }   
};

int main(){
    Car car1("Ionique5", "white", 10);
    car1.function();
    autonomous car2("Tesla", "black", 20);
    car2.function();
}
