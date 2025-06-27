#include<iostream>
#include<vector>
using namespace std;

int main(){
    int year=1996;

    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
        cout<<"Yes";
    } else {
        cout<<"NO";
    }
    return 0;
}