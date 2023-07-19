#include <iostream>

//https://pl.spoj.com/problems/PTROL/

using namespace std;

void transformTab(int pretab[], int n)
{
    int* trsdTab = new int[n];

    for(int i = 0; i < n -1; i++)
    {
        trsdTab[i] = pretab[i + 1];
    }
    trsdTab[n - 1] = pretab[0];

    for(int i = 0; i < n; i++)
    {
        cout << trsdTab[i] << " ";
    }
    delete[] trsdTab;
}
int main()
{
    int t;
    cin >> t;

    while(t > 0)
    {
        int n;
        cin >> n;
        
        int* preTab = new int[n];

        for(int i = 0; i < n; i++)
        {
            cin >> preTab[i];
        }
        transformTab(preTab, n);
        delete[] preTab;
        t--;
    }
    return 0;
}