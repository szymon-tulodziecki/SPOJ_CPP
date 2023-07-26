#include <iostream>
#include <vector>

//https://pl.spoj.com/problems/SKARBFI/

using namespace std;


int main()
{
    int d;
    cin >> d;
    
    for(int k = 0; k < d; k++)
    {
        int n;
        cin >> n;

        vector<int> N;
        vector<int> S;
        vector<int> E;
        vector<int> W;

        int step, direction;
        for(int i = 0; i < n; i++)
        {
            cin >> direction >> step;
            if(direction == 0) N.push_back(step);
            else if(direction == 1) S.push_back(step);
            else if(direction == 2) E.push_back(step);
            else if(direction == 3) W.push_back(step);
        }
        
        int N_steps = 0, S_steps = 0, E_steps = 0, W_steps = 0;

        for(int i = 0; i < N.size(); i++){N_steps += N[i];}
        for(int i = 0; i < S.size(); i++){S_steps += S[i];}
        for(int i = 0; i < E.size(); i++){E_steps += E[i];}
        for(int i = 0; i < W.size(); i++){W_steps += W[i];}

        cout << endl;

        if(N_steps == S_steps && E_steps == W_steps)
        {
            cout << "studnia" << endl;
        }
        else
        {
            if(N_steps > S_steps)
            {
                cout << "0 " << N_steps - S_steps << endl;
            }
            else if(S_steps > N_steps)
            {
                cout << "1 " << S_steps - N_steps << endl;
            }
            if(E_steps > W_steps)
            {
                cout << "2 " << E_steps - W_steps << endl;
            }
            else if(W_steps > E_steps)
            {
                cout << "3 " << W_steps - E_steps << endl;
            }
        }

    }
    return 0;
}