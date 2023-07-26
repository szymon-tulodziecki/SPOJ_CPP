#include <iostream>
#include <string>
#include <cctype>

//https://pl.spoj.com/problems/JHTMLLET/

using namespace std;

int main()
{
    string ht;
    while(getline(cin, ht))
    {
        bool Start_Stop = false;
        for(int i = 0; i < ht.length(); i++)
        {
            if(ht[i] == '<')
            {
                Start_Stop = true;
            }
            else if(ht[i] == '>')
            {
                Start_Stop = false;
            }

            if(Start_Stop && isalpha(ht[i]))
            {
                ht[i] = toupper(ht[i]);
            }
        }
            cout << ht << endl; 
    }
    
    return 0;
}