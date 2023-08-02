#include <iostream>
#include <vector>

//https://pl.spoj.com/problems/FZI_STEF/

using namespace std;

int main()
{
    int n;
    cin >> n;

    
    vector< long long int> numbers(n);

    for(int i = 0; i < n; i++)
    {
    cin >> numbers[i];
    }
        
    long long int sum = 0;
    long long int makSum = 0;

    for(int i = 0; i < n; i++)
    {
        sum += numbers[i];  
        if(sum < 0) sum = 0;
        if(sum > makSum)
        {
        makSum = sum;
        }
    }
    cout << endl;
    cout << makSum << endl;
    
    return 0;
}