#include <iostream>
#include <string>
#include <cmath>
#include <vector>

// https://pl.spoj.com/problems/PP0506A/

using namespace std;

struct point
{
    string name;
    int x;
    int y;
    double distance;
};


int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<point> tb(n); 

        for(int i = 0; i < n; i++)
        {
            cin >> tb[i].name >> tb[i].x >> tb[i].y;
            tb[i].distance = sqrt(pow(tb[i].x - 0, 2.0) + pow(tb[i].y - 0, 2.0)); 
        }

        for(int i = 0; i < n -1; i++)
        {
            for(int j = 0; j < n-1; j++)
            {
                if(tb[j].distance > tb[j +1]. distance)
                {
                    swap(tb[j], tb[j + 1]);
                }
            }
        }
        cout << endl;
        for(int i = 0; i < n; i++)
        {
            cout << tb[i].name << " " << tb[i].x << " " << tb[i].y << endl;
        }
    }
    
    return 0;
}