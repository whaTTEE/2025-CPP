#include <iostream>
using namespace std;

int function(int array[], int variable) // 배열을 매개변수로 사용
{
    int sum = 0;
    for (int i = 0; i < variable; i++)
        {
        sum += array[i];
        }
        return (sum / variable);
}

int main() {
   int score[5] = {90, 75, 80, 100, 85};
    cout << function(score, 5) << endl;
   return 0;
}
