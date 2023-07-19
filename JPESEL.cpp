#include <iostream>
#include <string>

//https://pl.spoj.com/problems/JPESEL/

using namespace std;

void checkPesel(string pesel)
{
    int peselTab[11];

    for(int i = 0; i < 11; i++)
    {
        peselTab[i] = pesel[i] - '0';
    }

    peselTab[1] *= 3;
    peselTab[2] *= 7;
    peselTab[3] *= 9;
    peselTab[5] *= 3;
    peselTab[6] *= 7;
    peselTab[7] *= 9;
    peselTab[9] *= 3;

    int sumOf = 0;

    for(int i = 0; i < 11; i++)
    {
        sumOf += peselTab[i];
    }

    if(sumOf % 10 == 0) cout << "D" << endl;
    else cout << "N" << endl;
}
int main()
{
    int t;
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        string pesel;
        cin >> pesel;

        checkPesel(pesel);
    }
    return 0;
}