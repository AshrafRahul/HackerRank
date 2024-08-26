#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    int m;
    cin >> m;
    vector<int> b(m);
    for(int i=0; i<m; i++) cin >> b[i];

    int x;
    cin >> x;
    
    vector<int> c;

    for(int i=0; i<x; i++) c.push_back(a[i]);
    for(int i=0; i<m; i++) c.push_back(b[i]);
    for(int i=x; i<n; i++) c.push_back(a[i]);

    for(int i=0; i<c.size(); i++) cout << c[i] << " ";
    cout << endl;

    return 0;
}