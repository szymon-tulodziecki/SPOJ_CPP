#include <iostream>

//https://pl.spoj.com/problems/PRZEDSZK/

using namespace std;
int sweets(const int a, const int b)
{
    if(a==b)
    {
        return a;
    }
    else
    {
        if(a > b && a % b == 0 )
        {
            return a;
        }
        else if(b > a && b % a == 0 )
        {
            return b;
        }
        else
        {
            for(int i = 1; i <= 900; i++)
            {
                if(i % a == 0 && i % b == 0)
                {
                    return i;
                    break;
                }
            }
        }
    }
    return -1;
}
int main()
{
    int qnt;
    cin >> qnt;
    
    int a, b;
    int result[qnt];
    for(int i = 0; i < qnt; i++)
    {
        cin >> a >> b;
        result[i] = sweets(a, b);   
    }

    for(int i = 0; i < qnt; i++)
        {
           cout << result[i] << endl;
        }
    


    return 0;
}