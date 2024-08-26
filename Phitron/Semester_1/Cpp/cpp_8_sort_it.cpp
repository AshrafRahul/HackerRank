#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
        char name[101];
        int cls;
        char sec;
        int id;
        int math_mark;
        int eng_mark;
        int total_mark;

        void totalMark() {
            total_mark = math_mark + eng_mark;
        }

        void print() {
            cout << name << " " << cls << " " << sec << " " << id << " " << math_mark << " " << eng_mark << endl;
        }
};

void sort(Student std[], int n) {
    for(int i=0; i<n-1; i++) {
        int maxInd = i;
        for(int j=i+1; j<n; j++) {
            if(std[j].total_mark > std[maxInd]. total_mark) maxInd = j;
            else if(std[j].total_mark == std[maxInd].total_mark && std[j].id < std[maxInd].id) maxInd=j;
        }
        if(maxInd!=i) {
            Student temp = std[i];
            std[i] = std[maxInd];
            std[maxInd] = temp;
        }
    }
}

int main() {
    int n;
    cin >> n;
     Student std[101];

     for(int i=0; i<n; i++) {
        cin >> std[i].name >> std[i].cls >> std[i].sec >> std[i].id >> std[i].math_mark >> std[i].eng_mark;
        std[i].totalMark();
     }

     sort(std, n);

     for(int i=0; i<n; i++) std[i].print();

    return 0;
}
