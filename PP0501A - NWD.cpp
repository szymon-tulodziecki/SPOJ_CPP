#include <iostream>

//https://pl.spoj.com/problems/PP0501A/

using namespace std;
void NWD(int a, int b)
{  
    if(a == 0)
    {
        cout << b << endl;
    }
    else if( b == 0)
    {
        cout << a << endl;
    }
    else if( a > b)
    {
        NWD(a % b, b);
    }
    else
    {
        NWD(a, b % a);
    }
}
int main()
{
    int tests;
    cin >> tests;

    int a[tests];
    int b[tests];

    for (int i = 0; i < tests; i++)
    {
        cin >> a[i] >> b[i];
    }
    for (int i = 0; i < tests; i++)
    {
        NWD(a[i], b[i]);
    }
    return 0;
}