#include <iostream>
#include <string>

using namespace std;

//https://pl.spoj.com/problems/JSZYCER/

string cesar_encrypt(string text, int shift)
{
    string result = "";

    for(char c : text)
    {
      if(isalpha(c))
      {
        char encrypted = (((c - 'A') + shift) % 26) + 'A';
        result += encrypted;
      }
      else result += c;

    }
    return result;
}

int main()
{
   string text;

   while(getline(cin, text))
   {
       string encrypted = cesar_encrypt(text, 3);
       cout << encrypted << endl;
    }
}