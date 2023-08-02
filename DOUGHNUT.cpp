#include <iostream>

//https://pl.spoj.com/problems/DOUGHNUT/

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int c, k, w;
        cin >> c >> k >> w;

        if(c * w == k || c * w < k) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    
    return 0;
}