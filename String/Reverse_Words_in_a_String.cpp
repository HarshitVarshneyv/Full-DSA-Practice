//Reverse Words in a String

// Example 1:

// Input: s = "the sky is blue"
// Output: "blue is sky the"

class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        string ans="";

        reverse(s.begin(),s.end());
        for(int i=0;i<n;i++){
           string word="";
           while(i < n && s[i] != ' '){
            word += s[i];
            i++;
           }    

           reverse(word.begin() , word.end());
            if(word.length() > 0){
                ans  += " " + word;
            }
        }
        return ans.substr(1);
    }
};

//Reverse word only
// Code HI => edoC IH

// // Online C++ compiler to run C++ program online
// #include <iostream>
// #include<algorithm>
// using namespace std;
// int main() {
//     string s = "code bashers";
//     int n = s.size();
//     bool sp = false;
//     string ans = "";
//     for(int i=0;i<n;i++){
//         string word = "";
//         while(i < n && s[i] != ' '){
//             word += s[i];
//             i++;
//         }
//         reverse(word.begin(),word.end());
        
//         if(word.size() > 0){
//             if(!sp){
//             ans += word;
//             sp = true;
//             } else{
//                 ans += " " + word;
//             }
//         }
//     }
//     cout << ans;
//     return 0;
// }