#include <iostream>

//https://pl.spoj.com/problems/PP0502B/

using namespace std;

void reverseTab(int tb[], int n)
{
    for(int i = (n-1); i >= 0; i--)
    {
        cout << tb[i] << " ";
    }
}

int main()
{
    int t;
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        int* tb;
        tb = new int[n];

        for(int j = 0; j < n; j++)
        {
            cin >> tb[j];
        }
        reverseTab(tb, n);
        delete[] tb;
    }
    
    return 0;
}