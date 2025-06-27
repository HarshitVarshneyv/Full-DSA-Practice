#include<iostream>
#include<stack>
using namespace std;

bool isValid(string s){
    stack<char> ans;
    for(char val : s){
        if(val == '(' || val == '[' || val == '{'){
            ans.push(val);
        }
        else{
            if(ans.empty()) return false;
            if((ans.top() == '(' && val == ')') ||
               (ans.top() == '[' && val == ']') ||
               (ans.top() == '{' && val == '}' )){
                ans.pop();
               } else return false;
        }
    }   
   return ans.empty();
}  

int main(){
    string str;
    cout << "Write : ";
    cin >> str;
    cout << (isValid(str) ? "True" : "False");
    return 0;
}