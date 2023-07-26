#include <iostream>

//https://pl.spoj.com/problems/KC003/

using namespace std;

int main()
{
    float a, b, c;

    while(cin >> a >> b >> c)
    {
        if(a + b > c &&  a + c > b && b + c > a) cout << "1" << endl;
        else if(a < 0 || b < 0 || c < 0) cout << "0" << endl;
        else cout << "0" << endl;
    }
    return 0;
}