// 001_BMI(C++ver).cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

int main()
{
    double h, w;

    cout << "체중(kg): ";
    cin >> w;

    cout << "키(cm): ";
    cin >> h;

    h /= 100;

    double bmi = w / (h * h);   // BMI = 체중/(키*키)
    cout << "BMI = " << bmi << endl;
}
