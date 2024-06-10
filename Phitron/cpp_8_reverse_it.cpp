#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
        char name[101];
        int cls;
        char sec;
        int id;
};

int main() {
    int n;
    cin >> n;

    Student std[101];

    for(int i=0; i<n; i++) cin >> std[i].name >> std[i].cls >> std[i].sec >> std[i].id;

    for(int i=0; i<n/2; i++) {
        char temp = std[i].sec;
        std[i].sec = std[n-1-i].sec;
        std[n-1-i].sec = temp;
    }

    for(int i=0; i<n; i++) cout << std[i].name << " " << std[i].cls << " " << std[i].sec << " " << std[i].id << endl;

    return 0;
}
