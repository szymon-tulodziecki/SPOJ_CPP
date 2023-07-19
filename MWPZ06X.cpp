#include <iostream>
#include <cmath>

//https://pl.spoj.com/problems/MWPZ06X/

using namespace std;

int main()
{
    int t;
    cin >> t;

    int a;
    while(t > 0)
    {
        cin >> a;
        cout << pow(a, 2.0) << endl;
        t--;
    }
    return 0;
}