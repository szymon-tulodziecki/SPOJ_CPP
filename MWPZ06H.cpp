#include <iostream>
#include <vector>
#include <algorithm>

//https://pl.spoj.com/problems/MWPZ06H/

using namespace std;

int main()
{
    int d;
    cin >> d;

    while (d--)
    {
        int n;
        cin >> n;

        vector<int> numbers(n);

        for(int i = 0; i < n; i++)
        {
            cin >> numbers[i];
        }

        sort(numbers.begin(), numbers.end());

        int max = numbers[n - 1];
        int maxCount = 0;

        for(int i = 0; i < n; i++)
        {
            if(numbers[i] == max)
            {
                cout << max << " ";
                maxCount++;
            }
        }

        for(int i = 0; i < n - maxCount; i++)
        {
            cout << numbers[i] << " ";
        }
    }
    
    return 0;
}