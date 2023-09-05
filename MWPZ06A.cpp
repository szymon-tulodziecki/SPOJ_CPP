#include <iostream>
#include <cmath>

//https://pl.spoj.com/problems/MWPZ06A/

using namespace std;

int main()
{
    int d;
    cin >> d;

    while (d--)
    {
        double x, y, z;
        cin >> x >> y >> z;

        double d_value;

        d_value = abs(((z * y - x - y) / (1 - z)) * 12);

        cout << trunc(d_value) << endl;
    }

    return 0;
}