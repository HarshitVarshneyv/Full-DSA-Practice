#include<iostream>
using namespace std;

bool Alphanumeric(char ch){
        if((ch >='0' && ch <='9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z' )){
            return true;
        }
        return false;
}

bool isPallindrome(string s){
      int st=0,end=s.size()-1;
      while(st < end){
        if(!Alphanumeric(s[st])){
            st++;
            continue;
        }
        if(!Alphanumeric(s[end])){
            end--;
            continue;
        }
        if(tolower(s[st]) != tolower(s[end])){
            return false;
        }
        st++;
        end--;
      }
      return true;
} 

int main(){
    string s = "A man, a plan, a canal: Panama";
    cout<<(isPallindrome(s) ? "True" :  "False");
    return 0;
}