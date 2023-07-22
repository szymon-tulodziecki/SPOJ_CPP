#include <iostream>

//https://pl.spoj.com/problems/PP0602D/

using namespace std;

int main()
{
    int n;
    int k;
    cin >> n >> k;

    int tab[n];

    for(int i = 0; i < n; i++)
    {
        cin >> tab[i];
    }
    for(int i = k; i < n; i++)
    {
        cout << tab[i] << " ";
    }
    for(int i = 0; i < k; i++)
    {
        cout << tab[i] << " ";
    }
    return 0;
}