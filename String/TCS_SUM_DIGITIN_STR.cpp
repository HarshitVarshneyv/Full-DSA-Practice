#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    string str;
    cin >> str;
    string s="";
    int sum=0;
    for(int i=0;i<str.size();i++){     // 12w2
        if( '0' <= str[i] && str[i] <= '9' ){
            s +=str[i];
          } 
        else if(!s.empty()){
            sum += stoi(s);
            s="";
        }
    }
    if(!s.empty()){    // For the last character 2...
        sum += stoi(s);
    }
    cout << sum;
    return 0;
}


/*
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    str += ' ';  // Append non-digit to handle the last number

    string s = "";
    int sum = 0;

    for (char ch : str) {
        if (isdigit(ch)) {
            s += ch;
        } else if (!s.empty()) {
            sum += stoi(s);
            s = "";
        }
    }

    cout << sum;
    return 0;
}

💡 How it works?
By adding ' ' at the end, it ensures the last number gets processed without an extra check.
str += ' ';  // Now str = "abc12def34gh56 "
When the loop hits the appended space, it treats it as a non-digit.
This forces the code to process the last number (56).
*/