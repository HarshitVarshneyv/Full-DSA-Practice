#include<iostream>
using namespace std;

bool pallindrome(int n){
    int original = n;
    int rev=0,rem;

    while(n > 0){
        rem = n % 10;
        rev = (rev * 10 ) + rem;
        n = n/10;
    }
    return original == rev;
}

int main(){
    int n = 121;
    for(int i=0;i<= n;i++){
    if(pallindrome(i)){
        cout << i << " "; 
    }
    }
    cout<<endl;
    return 0;
}