#include<iostream>
#include<algorithm> //sort + reverse.       
#include<string>    
using namespace std;               
             
bool isVowel(char ch){
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main(){
    string str = "Australia";
    int vowelCount = 1;
    for(int i = 0;i<str.size();i++){
            if(isVowel(str[i])){
                str[i] = '0' + vowelCount;
                vowelCount++;
            }
            if(vowelCount > 9){
                vowelCount = 1; 
            }
    }
    reverse(str.begin(),str.end());
    cout << str;
    return 0;
}
