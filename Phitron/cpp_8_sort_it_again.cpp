#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
        char name[101];
        int cls;
        char sec;
        long long id;
        int math_marks;
        int eng_marks;

        void print() {
            cout << name << " " << cls << " " << sec << " " << id << " " << math_marks << " " << eng_marks << endl;
        }
};

void sort(Student std[], int n) {
    for(int i=0; i<n-1; i++) {
        int maxInd = i;
        for(int j=i+1; j<n; j++) {
            if(std[j].eng_marks > std[maxInd].eng_marks) maxInd = j;
            else if(std[j].eng_marks == std[maxInd].eng_marks) {
                if(std[j].math_marks > std[maxInd].math_marks) maxInd = j;
                else if(std[j].math_marks == std[maxInd].math_marks) {
                    if(std[j].id < std[maxInd].id) maxInd = j;
                }
            }
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

    Student std[1001];

    for(int i=0; i<n; i++) cin >> std[i].name >> std[i].cls >> std[i].sec >> std[i].id >> std[i].math_marks >> std[i].eng_marks;

    sort(std, n);

    for(int i=0; i<n; i++) std[i].print();

    return 0;
}
