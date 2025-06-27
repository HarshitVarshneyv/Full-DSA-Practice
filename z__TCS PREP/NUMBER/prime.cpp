#include<iostream>
#include<vector>
using namespace std;

bool checkPrime(int n){
    if(n < 2 ) return false;
    for(int i = 2 ; i*i <= n ; i++ ){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n=100;
    for(int i=0;i<n;i++){
    if(checkPrime(i)){
        cout << i << " " ;
    }
    }
    return 0;
}