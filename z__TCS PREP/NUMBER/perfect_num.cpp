#include<iostream>
#include<vector>
using namespace std;

bool check(int n){
    if(n <= 1){
        return false;
    }
    int sum=1;
    for(int i=2;i<n-1;i++){
         if(n % i == 0){
             sum += i;
         }
    }
    return sum == original;
}

int main(){
    int n=15;
    if(check(n)){
       cout << n << " is a perfect square"; 
    }
    else{
        cout<<n << " is not a perfect square"; 
    }
    return 0;
}