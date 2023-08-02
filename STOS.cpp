#include <iostream>
#include <vector>

//https://pl.spoj.com/problems/STOS/

using namespace std;

int main()
{
    vector<int> WorkSpace;
    char operation;

    while (cin >> operation)
    {
        if (operation == '+')
        {
            cin.ignore(); 
            int value;
            cin >> value;

            if (WorkSpace.size() >= 10)
            {
                cout << ":(" << endl;
            }
            else
            {
                WorkSpace.push_back(value);
                cout << ":)" << endl;
            }
        }
        else if (operation == '-')
        {
            if (!WorkSpace.empty())
            {
                cout << WorkSpace.back() << endl;
                WorkSpace.pop_back();
            }
            else
            {
                cout << ":(" << endl;
            }
        }
    }

    return 0;
}