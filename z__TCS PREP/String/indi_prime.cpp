// Online C++ compiler to run C++ program online
#include <iostream>
#include<set>
using namespace std;     
//23
bool check(int num){
    if(num < 2) {
        return false;
    }
    for(int i=2;i*i <= num;i++){
        if(num % i == 0){
            return false;
        } 
    }
    return true;
}
int main() {
    string str;
    cin >> str;
    
    int s = str.size();
    set<int> primes;
    
    for(int i=0;i<s;i++){
        for(int j=1;j<=s-i;j++){
            string str2 = str.substr(i,j);
            int num = stoi(str2);
            if(check(num)){
                primes.insert(num);
            }
        }
    }
     if (primes.empty()) {
        cout << "No prime numbers found" << endl;
    } else {
        for (int prime : primes) {
            cout << prime << " ";
        }
        cout << endl;
    }
    return 0;
}

