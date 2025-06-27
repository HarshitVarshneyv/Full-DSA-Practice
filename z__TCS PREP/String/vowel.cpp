#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int main(){
    unordered_set<char> s= {'a','e','i','o','u'};
    string str="harshit";
    int n=str.size(),st=0,vowels=0,consonent=0;
    while(st <= n-1){
    if(s.find(str[st]) != s.end()){
        vowels++;
    } else{
        consonent++;
    }
    st++;
    }
    cout<<"VOWELS are : " << vowels << " CONSONENT are : " <<consonent;
    return 0;
}