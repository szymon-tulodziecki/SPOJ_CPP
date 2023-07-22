#include <iostream>

//https://pl.spoj.com/problems/PP0601B/

using namespace std;

void checkDev(const int x, const int y, const int n)
{
    for(int i = 0; i < n; i++)
    {
        if(i % x == 0 && i % y != 0)
        {
            cout << i << " ";
        }
    }
}
int main()
{
    int t;
    cin >> t;

    while(t > 0)
    {
        int n, x, y;
        cin >> n >> x >> y;

        checkDev(x, y, n);
        
        t--;
    }
    return 0;
}