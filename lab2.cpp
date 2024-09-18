#include <iostream>
#include <cmath>
using namespace std;

// Lab_02.1.cpp
// < Магоцький Орест Маркович >
// Лабораторна робота № 2.1
// Лінійні програми.
// Варіант 18

int main()
{
    double z1 ,a;
    // double z2;
    cout << "a = "; cin >> a;
    z1 = ((a + 2 / sqrt(2 * a) - (a / sqrt(2 * a) + 2) + (2 / a - sqrt(2 * a)) * sqrt(a) - sqrt(2) / a + 2));
    // z2 = (1/ sqrt(a) + sqrt(2));
    cout << "z1 = " << z1 << endl;
    // cout << "z2 = " << z2 << endl;
    return 0;
}