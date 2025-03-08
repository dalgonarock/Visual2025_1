// 004_practice_BMI_C_Cpp.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

/*#include <stdio.h>

int main()
{
    double h, w;

    printf("키(cm): ");
    scanf_s("%lf", &h);

    printf("체중(kg): ");
    scanf_s("%lf", &w);

    h /= 100;
    double bmi = w / (h * h);

    printf("bmi = %lf\n", bmi);
}
*/

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

    cout << "bmi = " << bmi << endl;
}