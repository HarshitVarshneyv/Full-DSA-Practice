#include<iostream>
using namespace std;
int cal(string &str){
    int currDepth = 0;
    int maxDepth = 0;
    for(char ch : str){
        if(ch == '['){
            currDepth++;
            maxDepth = max(maxDepth,currDepth);
        } else if(ch == ']'){
            if(currDepth == 0){
                return -1;
            }
            currDepth--;
        }
    }
    return currDepth == 0 ? maxDepth : -1;
}
int main(){
    //str  = Hi[My[name[is]]]
    //string str = "Welcome [to [the[chat]]]";
    string str = "[Hi][My][Name[is]]";
    cout << cal(str);
    return 0;
}