#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n=12345;
    int reverse=0,r;
    while(n > 0){
        r=n % 10;
        reverse = (reverse * 10) + r;
        n = n / 10;
    }
    cout<<reverse;
    return 0;
}