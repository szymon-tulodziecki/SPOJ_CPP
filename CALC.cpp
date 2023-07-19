#include <iostream>

//https://pl.spoj.com/problems/CALC/

using namespace std;


int main()
{
    
    int a, b, result;
    char operation;
while(cin >> operation >> a >> b)
{
    switch(operation)
    {
        case '+': result = a + b; break;
        case '-': result = a - b; break;
        case '*': result = a * b; break;
        case '/': result = a / b; break;
        case '%': result = a % b; break;
        default: result = -1;
    }
    cout << result << endl;
}

    return 0;
}