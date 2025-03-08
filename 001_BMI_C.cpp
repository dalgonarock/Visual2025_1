// 001_BMI_C.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    double h;   //실수 h
    double w;   //실수 w

    printf("키(cm): ");  //출력문 입력
    scanf_s("%lf", &h);  //입력문 입력

    printf("체중(kg): "); //출력문 입력
    scanf_s("%lf", &w);   //입력문 입력

    h /= 100;             //키cm를 m로 변경
    double bmi = w / (h * h);   //bmi식을 입력
    printf("bmi = %lf\n", bmi); //bmi결과 값 출력
}
