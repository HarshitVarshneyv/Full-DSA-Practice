#include<iostream>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    string s=str;
    for(int i=0;i<str.size();i++){
        //if(str[i] == ' ') i++;
        if((i==0 || str[i+1] == ' ' || str[i-1] == ' ') || i == str.size() - 1){
            s[i] = toupper(str[i]);
        } else{
            s[i] = str[i];
        }
    }
    cout << s;
    return 0;
}

/*
#include <iostream>
#include <cctype>  // For toupper()
using namespace std;

int main() {
    string str;
    getline(cin, str);
    string s = str;  // Copy the input string

    for (int i = 0; i < str.size(); i++) {
        // Capitalize the first character of the word
        if (i == 0 || str[i - 1] == ' ') {
            s[i] = toupper(str[i]);
        }
        // Capitalize the last character of the word
        if (i == str.size() - 1 || str[i + 1] == ' ') {
            s[i] = toupper(str[i]);
        }
    }

    cout << s;
    return 0;
}

*/