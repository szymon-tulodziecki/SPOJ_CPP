#include <iostream>
#include <string>
#include <vector>

//https://pl.spoj.com/problems/WI_SZYFR/

using namespace std;

void contentEncryption(string k, string c)
{
    string encrypted = "";

    vector<int> shift;

    for(char ch : k)
    {
        shift.push_back(ch - '0');
    }  
    
    int yek = 0;
    for(int i = 0; i < c.length(); i++)
    {
      
        if(isalpha(c[i]))
        {
        char encrypt = (((c[i] - 'A') + shift[yek]) % 26) + 'A';
        yek++;
        encrypted += encrypt;
        }
        if(yek >= shift.size()) yek = 0;
    }
    cout << encrypted << endl;
}
//--------------------------------------------------------------
void contentDecryption(string k, string c)
{
    string decrypted = "";

    vector<int> shift;

    for(char ch : k)
    {
        shift.push_back(ch - '0');
    }  
    
    int yek = 0;
    for(int i = 0; i < c.length(); i++)
    {
      
        if(isalpha(c[i]))
        {
        char decrypt = (((c[i] - 'A') - shift[yek]) % 26) + 'A';
        yek++;
        decrypted += decrypt;
        }
        if(yek >= shift.size()) yek = 0;
    }
    cout << decrypted << endl;
}
//--------------------------------------------------------------

string key, content;
int main()
{
   string operation;
   cin >> operation;

   if(operation == "SZYFRUJ")
   {
    
    cin >> key >> content;

    contentEncryption(key, content);
    return 0;
   
   }

   if(operation == "DESZYFRUJ")
   {

    cin >> key >> content;
    contentDecryption(key, content);

    return 0;
   
   }
   return 0;
}