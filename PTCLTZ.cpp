#include <iostream>
#include <vector>

//https://pl.spoj.com/problems/PTCLTZ/

using namespace std;

int calculateCollatz(const int S, int n)
{
    if(S <= 0)
    {
        return -1;
    }
    else if(S == 1)
    {
        return n;
    }
    else if(S % 2 == 0)
    {
    
        return calculateCollatz(S / 2, n + 1);
    }
    else if(S % 2 == 1)
    {
        return calculateCollatz(3 * S + 1, n + 1);
    }
    return -1;
}
int main()
{   
    int t;
    cin >> t;

    vector<int>result(t);

    for(int i = 0; i < t; i++)
    {
       int S;
       cin >> S;
       result[i] = calculateCollatz(S, 0); 
    }
    for(int i = 0; i < t; i++)
    {
      cout << result[i] << endl; 
    }
    
    return 0;
}