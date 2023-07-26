#include <iostream>

//https://pl.spoj.com/problems/JWSPLIN/

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int Xa, Ya, Xb, Yb, Xc, Yc;
        cin >> Xa >> Ya >> Xb >> Yb >> Xc >> Yc;

        int diff1 = (Xb - Xa) * (Yc - Yb);
        int diff2 = (Yb - Ya) * (Xc - Xb);

        if (diff1 == diff2)
        {
            cout << "TAK" << endl;
        }
        else
        {
            cout << "NIE" << endl;
        }
    }
    return 0;
}