#include <iostream>
#include <cmath>

//https://pl.spoj.com/problems/ROWNANIE/

using namespace std;

int calculateElements(double a, double b, double c)
{
    double delta = pow(b, 2.0) - 4 * a * c;
    if(delta > 0) return 2;
    if(delta < 0) return 0;
    if(delta == 0) return 1;

    return -1;
}

int main()
{
    double a, b, c;
    while(cin >> a >> b >> c)
    {
        int result = calculateElements(a, b, c);
        cout << result << endl;
    }

    return 0;
}