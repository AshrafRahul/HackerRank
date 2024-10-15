#include<bits/stdc++.h>
using namespace std;

int findMxEvenValue(vector<int>& arr) {
    int maxEven = INT_MIN;
    int n = arr.size();

    for(int i=0; i<n; i++) {
        if(arr[i]%2==0) maxEven = max(maxEven, arr[i]);
    }

    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            int sum = arr[i]+arr[j];
            if(sum%2==0) maxEven = max(maxEven, sum);
        }
    } return maxEven;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for(int i=0; i<n; i++) cin >> arr[i];

    cout << findMxEvenValue(arr) << endl;

    return 0;
}