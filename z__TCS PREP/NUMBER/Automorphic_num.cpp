// Input Format: N = 76
// Result: Automorphic Number
// Explanation: Calculating 76 * 76 gives 5776, it ends with the given number.

#include<iostream>
#include<vector>
using namespace std;

bool Check(int n){
    int square = n * n;
    
    while(n > 0){
        if(square % 10 != n % 10){
            return false;
        }
        square /= 10;
        n /= 10;
    }
    return true;
}

int main(){
    int n;
    cout<<"Enter any number";
    cin>>n;
    cout<<(Check(n) ? "True" : "false");
    return 0;
}