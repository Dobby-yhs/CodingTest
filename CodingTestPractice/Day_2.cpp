/*
// C 스타일 ~ double 자료형 활용
#iclude <stdio.h>

int main(void)
{
    double a;
    double b;

    scanf("%lf %lf", &a, &b);

    printf("%.9lf", a / b);

    return 0;
}
*/

/*
// <iomanip> ~ std::setprecision 활용
#include <iostream>
#include <iomanip>

int main(void)
{
    double a, b;

    std::cin >> a >> b;

    std::cout << std::fixed;
    std::cout << std::setprecision(9) << a / b << std::endl;

    return 0;
}
*/

/*
// C++ 스타일 ~ std::fixed, std::cout.precision 활용
#include <iostream>

using namespace std;

int main(void)
{
    double a, b;
    cin >> a >> b;

    cout.precision(9);
    cout << fixed;

    cout << a / b;

    return 0;
}
*/