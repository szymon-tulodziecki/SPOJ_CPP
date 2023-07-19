#include <iostream>
#include <cmath>

//https://pl.spoj.com/problems/PRIME_T/

using namespace std;

bool prime_t(const int num)
{
  if(num <= 1) return false;
  for(int i = 2; i <= sqrt(num); i++)
  {
    if(num % i == 0) return false;
  }
    return true;
}  
int main()
{
    int qnt;
    cin >> qnt;

    int num[qnt];
    bool result[qnt];
    for(int i = 0; i < qnt; i++)
    {
        cin >> num[i];
        result[i] = prime_t(num[i]);
    }

    for(int i = 0; i < qnt; i++)
    {
       if(result[i])
       {
        cout << "YES" << endl;
       }
       else
       {
        cout << "NO" << endl;
       }
    }

    return 0;
}