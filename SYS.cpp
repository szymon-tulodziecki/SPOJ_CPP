#include <iostream>
#include <vector>

//https://pl.spoj.com/problems/SYS/

using namespace std;

void elv(int dec)
{
    vector<int> mod;
    int m;

    if (dec == 0)
    {
        mod.push_back(0);
    }
    else
    {
        while (dec > 0)
        {
            m = dec % 11;
            mod.push_back(m);
            dec /= 11;
        }
    }

    for (int i = mod.size() - 1; i >= 0; i--)
    {
        if (mod[i] == 10)
        {
            cout << "A";
        }
        else
        {
            cout << mod[i];
        }
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int dec;
        cin >> dec;

        cout << uppercase << hex << dec << " ";
        elv(dec);
        cout << endl;
    }

    return 0;
}