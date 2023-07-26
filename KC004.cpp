#include <iostream>
#include <vector>

//https://pl.spoj.com/problems/KC004/

using namespace std;

int main()
{
    int l, n;
    vector<int>numbers(l);

    while(cin >> l >> n)
    {
        for(int i = 0; i < n; i++)
        {
            cin >> numbers[i];
        }

        int count = 0;

        for(int i = 0; i < n; i++)
        {
            if(numbers[i] == l)
            {
                count++;
            }
        }

        cout << count << endl;
    }

    
}