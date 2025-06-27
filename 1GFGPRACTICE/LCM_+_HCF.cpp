#include<iostream>  
using namespace std;               
            
int main(){
    int a=20,b=28;
    int p = a * b;
    while(a > 0 && b > 0){
        if(a > b){
            a = a % b ; 
        } else {
            b = b % a ;
        }
    }
    if(a == 0){
        cout << p / b;
    } else {
        cout << p / a;
    }
    return 0;
}
