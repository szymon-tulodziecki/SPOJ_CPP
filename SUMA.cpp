#include <iostream>
#include <vector>

//https://pl.spoj.com/problems/SUMA/

using namespace std;

int main()
{
    vector<int> sumOf;

    int num;

    while(cin >> num)
    {
        sumOf.push_back(num);
    }

    int sum = sumOf[0];
    for(int i = 0; i < sumOf.size(); i++)
    {
        cout << sum << endl;
        sum += sumOf[i+1];
    }
    return 0;
}