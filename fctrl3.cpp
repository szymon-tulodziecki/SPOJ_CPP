#include <iostream>

//https://pl.spoj.com/problems/FCTRL3/

using namespace std;

void  calculateFactorial(int num, int& unitDigit, int& tensDigit)
{
    int factorial = 1;
    for (int i = 1; i <= num; i++)
    {
        factorial *= i;
    }

    unitDigit = factorial % 10;
    tensDigit = (factorial / 10) % 10;
}
void factorial(int number[], int  qnt)
{
    int unitDigit, tensDigit;
    
    for(int i = 0; i < qnt; i++)
    {
            if(number[i] > 10)
            {
                unitDigit = 0, 
                tensDigit = 0;
            }
            else
            {
           calculateFactorial(number[i], unitDigit, tensDigit);
            } 
            cout << tensDigit << " " << unitDigit << endl;
    }

}

int main()
{
    int qnt;
    cin >> qnt;
    if (qnt <=0 ) {return 0;}
    
    int number[qnt];
    for(int i = 0; i < qnt; i++)
    {
        cin >> number[i];      
    }
    factorial(number, qnt);

    return 0;
}