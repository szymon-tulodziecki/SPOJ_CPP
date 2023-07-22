#include <iostream>
#include <vector>
#include <string>

//https://pl.spoj.com/problems/CALC2/

using namespace std;

int main()
{
    vector<int> registers(10, 0);
    char operation;
    int reg, val;

    while (cin >> operation >> reg >> val)
    {
        if (operation == 'z')
        {
            registers[reg] = val;
        }
        else if (operation == '+')
        {
            cout << registers[reg] + registers[val] << endl;
        }
        else if (operation == '-')
        {
            cout << registers[reg] - registers[val] << endl;
        }
        else if (operation == '*')
        {
            cout << registers[reg] * registers[val] << endl;
        }
        else if (operation == '/')
        {
            cout << registers[reg] / registers[val] << endl;
        }
        else if (operation == '%')
        {
            cout << registers[reg] % registers[val] << endl;
        }
    }

    return 0;
}