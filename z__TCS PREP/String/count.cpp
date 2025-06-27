#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Take u forward is Awesome 12345";
    string vowels = "aeiou";
    int space = 0, v = 0, con = 0, digit = 0;

    for (char ch : str) {
        ch = tolower(ch);
        if (ch == ' ') {
            space++;
        } else if (vowels.find(ch) != string::npos) {
            v++;
        } else if (isalpha(ch)) {
            con++;
        } else if (isdigit(ch)) {
            digit++;
        }
    }

    cout << "Spaces: " << space << endl;
    cout << "Vowels: " << v << endl;
    cout << "Consonants: " << con << endl;
    cout << "Digits: " << digit << endl;

    return 0;
}
