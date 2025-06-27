#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "take u forward";
    string vowel="aeiou";
    string result="";

    for(char ch : str){
        if(vowel.find(ch) == string::npos){
            result += ch;
        }
    }
    cout << result ;

    return 0;
}