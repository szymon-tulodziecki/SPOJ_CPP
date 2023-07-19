#include <iostream>

//https://pl.spoj.com/submit/PP0602A/

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t > 0)
    {
    int n; 
    cin >> n;

    int* tb = new int[n];

    for(int i = 1; i <= n; i++)
    {
        cin >> tb[i];
    } 

    for(int i = 2; i <= n; i += 2)
    {
        cout << tb[i] << " ";
    }
    for(int i = 1; i <= n; i += 2)
    {
        cout << tb[i] << " ";
    }
    t--;
    }
    return 0;
}