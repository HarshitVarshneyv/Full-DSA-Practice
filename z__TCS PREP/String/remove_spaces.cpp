#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "take u forward";
    string spaces=" ";
    string result="";

    for(char ch : str){
        if(spaces.find(ch) == string::npos){
            result += ch;
        }
    }
    cout << result ;

    return 0;
}