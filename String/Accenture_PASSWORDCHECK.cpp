#include<iostream>
#include<vector>
using namespace std;

int checkValid(string str,int n){
    if(str[0] >= '0' && str[0] <= '9' ){
        return 0;
    }

    bool numericDigit = false,capitalLetter=false;  

    for(char val : str){
        if(val == ' ' || val == '/'){
            return 0;
        }
        if (val >= '0' && val <= '9') {
            numericDigit = true;
        }

        if (val >= 'A' && val <= 'Z') {
            capitalLetter = true;
        }
    }
    if(n >= 4 && numericDigit  && capitalLetter ){
        return 1;
    } else{
        return 0;
    }
}

int main(){
    string str="aA1_67";
    int n = str.size();
    cout << checkValid(str,n);
    return 0;
}


/*
You are given a function.
int CheckPassword(char str[], int n);
The function accepts string str of size n as an argument. Implement the function which returns 1 if given string str is valid password else 0.
str is a valid password if it satisfies the below conditions.

– At least 4 characters
– At least one numeric digit
– At Least one Capital Letter
– Must not have space or slash (/)
– Starting character must not be a number
*/