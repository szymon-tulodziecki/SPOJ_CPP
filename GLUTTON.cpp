#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, m;
        cin >> n >> m;

        int totalSeconds = 0;
        for(int i = 0; i < n; i++)
        {
            int eatingTime;
            cin >> eatingTime;
            totalSeconds += 86400 / eatingTime;
        }

        int result = (totalSeconds + m - 1) / m;
        cout << result << endl;
    }

    return 0;
}