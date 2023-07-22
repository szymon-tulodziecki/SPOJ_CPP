#include <iostream>

//https://pl.spoj.com/problems/EUCGAME/

using namespace std;
void calculateCoins(int a, int b)
{
   if(a == b) cout << a + b << endl;
   else
   {
        if(a > b)
        {
            a -= b;
            calculateCoins(a, b);
        }
        if(b > a)
        {
            b -= a;
            calculateCoins(a, b);
        }
   }
}
int main()
{
    int t;
    cin  >> t;

    while(t > 0)
    {   
        int a, b;
        cin >> a >> b;

        calculateCoins(a, b);
        t--;
    }
    return 0;
}