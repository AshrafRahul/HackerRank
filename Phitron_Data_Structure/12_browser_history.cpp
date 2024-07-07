#include<bits/stdc++.h>
using namespace std;

int main() {
    list<string> webList;
    string address;

    while(cin>>address && address!="end") webList.push_back(address);

    int t;
    cin >> t;
    cin.ignore();

    auto current = webList.begin();

    while(t--) {
        string command;
        getline(cin, command);
        stringstream ss(command);
        string cmd;
        ss >> cmd;

        if(cmd == "visit") {
            string visitAddress;
            ss >> visitAddress;

            auto it = find(webList.begin(), webList.end(), visitAddress);
            if(it != webList.end()) {
                current = it;
                cout << *current << endl;
            } else cout << "Not Available" << endl;
        } else if(cmd == "next") {
            if(current != webList.end() && next(current)!=webList.end()) {
                current++;
                cout << *current << endl;
            } else cout << "Not Available" << endl;
        } else if(cmd == "prev") {
            if(current != webList.begin()) {
                current--;
                cout << *current << endl;
            } else cout << "Not Available" << endl;
        }
    }

    return 0;
}
