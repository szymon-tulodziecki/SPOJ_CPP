#include <iostream>

//https://pl.spoj.com/problems/RNO_DOD/

using namespace std;

int sum(int tab[], int size)
{
    int outcome = 0;
    for(int i = 0; i < size; i++)
    {
        outcome += tab[i];
    } 
    return outcome;
}

int main()
{
    int tests;
    cin >> tests;

    int* sumOF;
    sumOF = new int[tests];

    for(int i = 0; i < tests; i++)
    {
        int size;
        cin >> size;

        int* tab;
        tab = new int [size];
        for(int j = 0; j < size; j++)
        {
            cin >> tab[j];
        }
        sumOF[i] = sum(tab, size);
        delete[] tab;
    }
    for(int i = 0; i < tests; i++)
    {
        cout << sumOF[i] << endl;
    }

    return 0;
}