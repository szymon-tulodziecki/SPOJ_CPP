#include <iostream>

//https://pl.spoj.com/problems/PA05_POT/

using namespace std;

int powerOfcheck(int x,  int y)
{
    if (x == 0) return 0;
    if (y == 0) return 1;
    if (x % 10 == 1) return 1;
    if (x % 10 == 0) return 0;
    if (x % 10 == 2)
    {
        if (y % 4 == 1) return 2;
        if (y % 4 == 2) return 4;
        if (y % 4 == 3) return 8;
        if (y % 4 == 0) return 6;
    }
    if(x % 10 == 3)
    {
        if (y % 4 == 1) return 3;
        if (y % 4 == 2) return 9;
        if (y % 4 == 3) return 7;
        if (y % 4 == 0) return 1;
    }
    if (x % 10 == 4)
    {
        if (y % 2 == 1) return 4;
        if (y % 2 == 0) return 6; 
    }
    if (x % 10 == 5) return 5;
    if (x % 10 == 6) return 6;
    if (x % 10 == 7)
    {
        if (y % 4 == 1) return 7;
        if (y % 4 == 2) return 9;
        if (y % 4 == 3) return 3;
        if (y % 4 == 0) return 1;
    }
    if (x % 10 == 8)
    {
        if (y % 4 == 1) return 8;
        if (y % 4 == 2) return 4;
        if (y % 4 == 3) return 2;
        if (y % 4 == 0) return 6;
    }
    if (x % 10 == 9)
    {
        if (y % 2 == 1) return 9;
        if (y % 2 == 0) return 1;
    }
return -1;
}

int main()
{
    int qnt;
    cin >> qnt;

    int a[qnt], b[qnt];
    int result[qnt];
    for(int i = 0; i < qnt; i++)
    {
        cin >> a[i]; 
        cin >> b[i];

        result[i] = powerOfcheck(a[i], b[i]);
    }

      for(int i = 0; i < qnt; i++)
    {
        cout << result[i] << endl;
    }
    return 0;
}