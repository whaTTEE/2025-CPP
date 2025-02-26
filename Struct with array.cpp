#include <iostream>
#include <string>
using namespace std;

// string p1_name = "j";
// int p1_age = 15;
// int p1_kg = 81;

// string p2_name = "k";
// int p2_age = 12;
// int p2_kg = 90;

// int main() {
//     cout << p1_age << endl;
// }

// 위 코드는 구조체를 사용하지 않았을 때

struct people {
    int age;
    int kg;
    string name;
};


int main(){
    people members[3] = {
    {25, 57, "LEE"},
    {14, 76, "KIM"},
    {51, 96, "PARK"}
};
    for(int i = 0; i < 3; i++){
        int a = members[i].age;
        int b = members[i].kg;
        string c = members[i].name;

        cout<< "나이는 : " << a << " 몸무게는 : " << b << " 이름은 : " << c << endl;
    }    
    }

