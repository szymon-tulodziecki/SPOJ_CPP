#include <iostream>

//https://pl.spoj.com/problems/VSR/

using namespace std;

void v_avg(int a, int b)
{
    int l = 2 * (a * b);
    int m = a + b;

    int out = l / m;

    cout << out << endl;
}
int main()
{
    int t; 
    cin >> t;


    while(t > 0)
    {
        int a, b;
        cin >> a >> b;

        v_avg(a, b);
        t--;
    }
    return 0;
}