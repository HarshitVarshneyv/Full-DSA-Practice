#include<iostream>
#include<vector>
using namespace std;

bool checkArm(int n){
    int original = n;
    int arm=0,r;

    while(n > 0){
        r=n % 10;
        arm = (r * r * r) + arm;
        n = n / 10;
    }
    return original == arm;
}

int main(){
    int n=151;
    cout<<(checkArm(n) ? "YES" : "NO");
    return 0;
}