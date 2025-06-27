#include<iostream>
using namespace std;

int main(){
    string str = "ABBCCBB";
    int n=str.size();
    int st=0,end=n-1;

    while(st < end){
         if(str[st] != str[end]){
            cout<< "False";
            return 0;
         }
         st++;
         end--;
    }
    cout<< "True";
    return 0;
}