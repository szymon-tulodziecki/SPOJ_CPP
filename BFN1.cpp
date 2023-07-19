#include <iostream>
#include <string>

using namespace std;
string revText(string txt)
{
    string revTxt;
    for(int i = txt.length() -1; i >= 0; i--)
    {
      revTxt += txt[i];
    }
    return revTxt;
}
void resultsOf(int num, int count)
{
    
    if(num % 10 == num) cout << num << " " << "0" << endl;
    else
    {
    string txt = to_string(num);
    string revTxt = revText(txt);
    if(txt == revTxt)
    {
        cout << num << " " << count << endl;
    }
    else
    {
        num = stoi(txt) + stoi(revTxt);
        resultsOf(num, count + 1);
    }
    }    
}

int main()
{
    int tests;
    cin >> tests;

    int value[tests];
    for(int i = 0; i < tests; i++)
    {
        cin >> value[i];
    }
    for(int i = 0; i < tests; i++)
    {
        resultsOf(value[i], 0);
    }
    return 0;
}