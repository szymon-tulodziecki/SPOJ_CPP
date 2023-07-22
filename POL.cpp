#include <iostream>

//https://pl.spoj.com/problems/POL/

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t > 0)
    {
        string txt;
        cin >> txt;
        
        for(int i = 0; i < txt.length() / 2; i++)
        {
            cout << txt[i];
        }
        cout << endl;
        t--;
    }
    return 0;
}