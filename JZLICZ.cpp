#include <iostream>
#include <vector>
#include <string>

// https://pl.spoj.com/problems/JZLICZ/ 
// (!!Make sure that you choose (C++(gcc 8.3)) version!!)

using namespace std;

struct alph
{
    char sign;
    int  count;
};

int main()
{   
    vector<alph> alphabet;
    for(char c = 'a'; c <= 'z'; c++)
    {
        alphabet.push_back({c, 0});
    }
    for(char c = 'A'; c <= 'Z'; c++)
    {
        alphabet.push_back({c, 0});
    }
    
    int n;
    cin >> n;

    cin.ignore();
    
    while(n--)
    {
        string txt;
        getline(cin, txt);

        for(char c : txt)
        {
            for(int j = 0; j < alphabet.size(); j++)
            {
                if(c == alphabet[j].sign)
                {
                    alphabet[j].count++;
                    break;
                }
            }
        }
    }

    cout << endl;
    for(int i = 0; i < alphabet.size(); i++)
    {
        if(alphabet[i].count > 0)
        {
        cout << alphabet[i].sign << " " << alphabet[i].count << endl;
        }
    }
    return 0;
}