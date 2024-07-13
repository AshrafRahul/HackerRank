#include<bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    cin.ignore();

    queue<string> qu;
    for(int i=0; i<q; i++) {
        string command;
        getline(cin, command);

        if(command[0] == '0') {
            string name = command.substr(2);
            qu.push(name);
        } else if(command[0] == '1') {
            if(qu.empty()) cout << "Invalid" << endl;
            else {
                cout << qu.front() << endl;
                qu.pop();
            }
        }
    }

    return 0;
}
