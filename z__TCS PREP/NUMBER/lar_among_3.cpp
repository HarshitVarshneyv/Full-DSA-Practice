#include<iostream>
using namespace std;

int calculate(int a,int b,int c){
    if(a>b){
        if(c>a){
            return c;
        } 
        else{
            return a;
        }
    }
    else{
        if(b>c){
            return b;
        }
        else{
            return c;
        }
    }
}
int main(){
    int a=50,b=15,c=200;
    cout<<calculate(a,b,c);
}