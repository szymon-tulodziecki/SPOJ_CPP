#include <iostream>
#include <cmath>
#include <vector>

// https://pl.spoj.com/problems/PP0604A/

using namespace std;

int checkAverage(const vector<int>& vec, int s)
{
    int sumOf = 0;
    for (int i = 0; i < s; i++)
    {
        sumOf += vec[i];
    }

    double avg = static_cast<double>(sumOf) / s;

    int clst = vec[0];

    for (int i = 1; i < s; i++)
    {
        if (abs(avg - vec[i]) < abs(avg - clst))
        {
            clst = vec[i];
        }
    }
    return clst;
}

int main()
{
    int t;
    cin >> t;

    vector<int> result(t);
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<int> numbers(n);

        for (int j = 0; j < n; j++)
        {
            cin >> numbers[j];
        }

        result[i] = checkAverage(numbers, n);
    }

    for (int i = 0; i < t; i++)
    {
        cout << result[i] << endl;
    }

    return 0;
}