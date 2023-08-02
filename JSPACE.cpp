#include <iostream>
#include <string>
#include <cctype>

//https://pl.spoj.com/problems/JSPACE/

using namespace std;

int main()
{   
    string text;
    while(getline(cin, text))
    {

        for(int i = 0; i < text.length(); i++)
        {
            if(isspace(text[i]))
            {
                text[i + 1] = toupper(text[i + 1]);
            }
        }

        for(int i = 0; i < text.length(); i++)
        {
            if(!isspace(text[i]))
            {
                cout << text[i];
            }
        }    
        cout << endl;

    }

    return 0;
}