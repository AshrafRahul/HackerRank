#include <iostream>
#include <string>
using namespace std;

bool isVowel(char ch) {
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        string S;
        cin >> S;
        
        int vowels = 0, consonants = 0, digits = 0;
        
        for (char ch : S) {
            if (isdigit(ch)) {
                digits++;
            } else if (isVowel(ch)) {
                vowels++;
            } else {
                consonants++;
            }
        }
        
        int boxes = 0;
        
        while (consonants > 0 || vowels > 0 || digits > 0) {
            int consonantsInBox = min(3, consonants); 
            int vowelsInBox = min(2, vowels);   
            int digitsInBox = min(1, digits); 

            consonants -= consonantsInBox;
            vowels -= vowelsInBox;
            digits -= digitsInBox;
            
            boxes++;
        }
        
        cout << boxes << endl;
    }
    
    return 0;
}
