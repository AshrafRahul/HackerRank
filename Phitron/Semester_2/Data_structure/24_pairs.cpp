#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<string, int>& a, pair<string, int>& b) {
    if(a.first == b.first) return a.second > b.second;
    return a.first < b.first;
}

int main() {
    int n;
    cin >> n;
    vector<pair<string, int>> list(n);

    for(int i=0; i<n; i++) cin >> list[i].first >> list[i].second;

    sort(list.begin(), list.end(), cmp);

    for(auto &it: list) cout << it.first << " " << it.second << endl;

    return 0;
}
