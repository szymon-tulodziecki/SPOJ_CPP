#include <iostream>

//https://pl.spoj.com/problems/POTSAM/

using namespace std;

int main()
{
    int n1, k1, n2, k2;
    cin >> n1 >> k1 >> n2 >> k2;

    cout << n1 * k1 + n2 * k2 << endl;
    return 0;
}