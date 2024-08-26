#include<bits/stdc++.h>
using namespace std;

int main() {
    list<int> myList;
    int t;
    cin >> t;
    while(t--) {
        int x, v;
        cin >> x >> v;

        if(x==0) myList.push_front(v);
        else if(x==1) myList.push_back(v);
        else if(x==2) {
            if(v>=0 && v<myList.size()) {
                auto it = next(myList.begin(), v);
                myList.erase(it);
            }
        }

        cout << "L -> ";
        for(auto it=myList.begin(); it!=myList.end(); it++) cout << *it << " ";
        cout << endl;

        myList.reverse();
        cout << "R -> ";
        for(auto it=myList.begin(); it!=myList.end(); it++) cout << *it << " ";
        cout << endl;

        myList.reverse();
    }

    return 0;
}
