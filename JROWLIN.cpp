#include <iostream>
#include <iomanip>

//https://pl.spoj.com/problems/JROWLIN/

using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;

    double x;
    if(a == 0.00 && b == c) cout << "NWR" << endl;
    else if(a == 0.00 && b != c) cout << "BR" << endl;
    else if(a != 0.00)
    {
        x = (c - b) / a;
        cout << fixed << setprecision(2) << x << endl;
    } 
    return 0;
}