#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll INF = LLONG_MAX;

int main()
{
    ll n, e;
    cin >> n >> e;
    vector<vector<ll>> adj(n, vector<ll>(n, INF));

    for (int i = 0; i < n; i++)
    {
        adj[i][i] = 0;
    }

    for (int i = 0; i < e; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj[a-1][b-1] = min(adj[a-1][b-1], (ll)c);
    }

    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (adj[i][k] != INF && adj[k][j] != INF && adj[i][k] + adj[k][j] < adj[i][j])
                {
                    adj[i][j] = adj[i][k] + adj[k][j];
                }
            }
        }
    }

    ll q;
    cin >> q;
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        x--; y--;
        if (adj[x][y] == INF)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << adj[x][y] << endl;
        }
    }

    return 0;
}
