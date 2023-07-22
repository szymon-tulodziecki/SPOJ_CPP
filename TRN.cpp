#include <iostream>

//https://pl.spoj.com/problems/TRN/

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;

    int** tb = new int*[m];
    for(int i = 0; i < m; i++)
    {
        tb[i] = new int[n];
    }

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> tb[i][j];
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << tb[j][i] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for(int i = 0; i < m; i++)
    {
        delete[] tb[i];
    }
    delete[] tb;

    return 0;
}


/*
Table index:
00|01|02
10|11|12
20|21|22
30|31|32
40|41|42

Table index after cout:
00|10|20|30|40
01|11|21|31|41
02|12|22|32|42
*/