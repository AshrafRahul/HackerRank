#include<bits/stdc++.h>
using namespace std;

void topStudent(int id1, string name1, char sec1, int makr1, int id2, string name2, char sec2, int makr2, int id3, string name3, char sec3, int makr3) {
    if(makr1>=makr2 && makr1>=makr3) cout << id1 << " " << name1 << " " << sec1 << " " << makr1 << endl;
    else if(makr2>=makr1 && makr2>=makr3) cout << id2 << " " << name2 << " " << sec2 << " " << makr2 << endl;
    else if(makr3>=makr1 && makr3>=makr2) cout << id3 << " " << name3 << " " << sec3 << " " << makr3 << endl;
}

int main() {
    int n;
    cin >> n;
    while(n--) {
        int id1, id2, id3, mark1, mark2, mark3;
        string name1, name2, name3;
        char sec1, sec2, sec3;

        cin >> id1 >> name1 >> sec1 >> mark1;
        cin >> id2 >> name2 >> sec2 >> mark2;
        cin >> id3 >> name3 >> sec3 >> mark3;

        topStudent (id1, name1, sec1, mark1, id2, name2, sec2, mark2, id3, name3, sec3, mark3);
    }

    return 0;
}