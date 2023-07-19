#include <iostream>

//https://pl.spoj.com/problems/FLAMASTE/

using namespace std;

void transformTXT(string txt)
{
      int l=1;
      
        for (int i=1; i<=txt.length(); i++)
        {
            if(txt[i] != txt[i-1])
            {
                if(l > 2)
                    cout<< txt[i-1] << l;
                else if (l == 2)
                    cout<< txt[i-1] << txt[i-1];
                else
                    cout<<txt[i-1];
                l=1;
            }
            else l++;
        }
        cout << endl;
}
int main()
{
    int t;
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        string txt;
        cin >> txt;

        transformTXT(txt);
    }
    return 0;
}