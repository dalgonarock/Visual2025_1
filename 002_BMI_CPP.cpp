// 002_BMI_CPP.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//


#include <iostream>
using namespace std;

int main()
{
    double h, w;

    cout << "키(cm): ";
    cin >> h;
    cout << "체중(kg): ";
    cin >> w;

    h /= 100;
    double bmi = w / (h * h);

    cout << "BMI= " << bmi << endl;
}