#include <iostream>
#include <string>

//https://pl.spoj.com/problems/PP0504B/

using namespace std;
void string_merge(string s1, string s2)
{
    string result;
    int i = 0;
    int j = 0;

    while(i < s1.length() || j < s2.length())
    {
        if(i < s1.length())
        {
            result += s1[i];
            i++;
        }
        if(j < s2.length())
        {
            result += s2[j];
            j++;
        }
        if(i >= s1.length() || j >= s2.length()) break;
    }
    cout << result << endl;
}
int main()
{
    int t;
    cin >> t;

    string s1, s2;
    string result;
    for(int i = 0; i < t; i++)
    {
        cin >> s1 >> s2;
        string_merge(s1, s2);

    }
    return 0;
}

 