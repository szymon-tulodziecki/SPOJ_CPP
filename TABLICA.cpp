#include <iostream>
#include <vector>

//https://pl.spoj.com/status/

using namespace std;

int main()
{
    vector<int> numbers;

    int number;
    while(cin >> number)
    {
    numbers.push_back(number);
    }

    for(int i = numbers.size() -1; i >=0; i--)
    {
        cout << numbers[i] << " ";
    }
    return 0;
}