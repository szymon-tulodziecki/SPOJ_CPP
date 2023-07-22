#include <iostream>
#include <vector>

//https://pl.spoj.com/problems/PP0601A2/

using namespace std;

int main()
{
    vector<int> numbers;
    int num;

    while(cin >> num)
    {
        int hlp = 0;
        numbers.push_back(num);
        for(int i = 0; i < numbers.size(); i++)
        {
            if(numbers[i] != 42 && numbers[i + 1] == 42) hlp++;
        }
        if(hlp == 3) break;
    }

    cout << endl;

    for(int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << endl;
    }
    return 0;
}