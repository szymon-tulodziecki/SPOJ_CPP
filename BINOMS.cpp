#include <iostream>

//https://pl.spoj.com/problems/BINOMS/

using namespace std;

void calculateValues(int n,  int k)
{
    if (k > n / 2)
    k = n - k;

    long long int result = 1;

    for(int i = 0; i < k; i++)
    {
        result *= (n - i); 
        result /= (i + 1);
    }

    cout << result << endl;
}
int main()
{
    int t; 
    cin >> t;

    while(t--)
    {
        int n, k;
        cin >> n >> k;

        calculateValues(n, k);
    }
    return 0;
}