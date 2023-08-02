#include <iostream>

//https://pl.spoj.com/problems/MWPZ06D/

using namespace std;

int D, L, C;

int main()
{
    cin >> D;
    for(int i = 0; i < D; i++)
    {
        cin >> L >> C;
        if (C == 0||L == 0) cout << "NIE" << endl;
        else if (L == 1) cout << "TAK" << endl;
        else if(C % (L-1) == 0) cout << "NIE" << endl;
        else if(L == 0 || C == 0) cout << "NIE" << endl;
        else cout << "TAK" << endl;
    }
    return 0;
}