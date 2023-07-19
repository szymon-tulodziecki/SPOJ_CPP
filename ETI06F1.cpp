#include <iostream>
#include <cmath>

//https://pl.spoj.com/problems/ETI06F1/

using namespace std;

double calculateCircleArea(double r, double d)
{
    double r_intersect = sqrt(r * r - (d / 2) * (d / 2));
    double P = M_PI * r_intersect * r_intersect;
    return P;
}

int main()
{
    double r, d;
    cin >> r >> d;

    double area = calculateCircleArea(r, d);

    cout << area << endl;

    return 0;
}