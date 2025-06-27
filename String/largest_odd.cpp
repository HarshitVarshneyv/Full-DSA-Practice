// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

bool checkOdd(int n){
   return (n % 2 == 1);
}

int main() {
    string num = "222223";
    int largestOdd=-1;
    for(int i=0;i<num.size();i++){
        for(int j=1;j<=num.size()-i;j++){
            string str=num.substr(i,j);
            int n = stoi(str);
            if(checkOdd(n)){
                largestOdd=max(largestOdd,n);
            }
        }
    }
    if(largestOdd == -1){
        cout << "j ";
    } else cout << largestOdd;
    return 0;
}


/*

#include <iostream>
using namespace std;

string largestOddNumber(string num) {
    int n = num.length();
    
    // Traverse from the last digit to find the rightmost odd digit
    for (int i = n - 1; i >= 0; i--) {
        if ((num[i] - '0') % 2 == 1) {  // Check if odd //Convert it into the integer by ASIIC value of '0'
            return num.substr(0, i + 1);
        }
    }
    
    return ""; // No odd number found
}

int main() {
    cout << largestOddNumber("52") << endl;       // Output: "5"
    cout << largestOddNumber("4206") << endl;     // Output: ""
    cout << largestOddNumber("35427") << endl;    // Output: "35427"
    cout << largestOddNumber("1002") << endl;     // Output: "1"
    return 0;
}
*/


//COnvetion can be done by this also..........
// for(int i = n-1 ; i >= 0 ; i--){
//         string str = num.substr(0,i+1);
//         int number = stoi(str);
//         if(number % 2 == 1){
//             return str;
//         }
//     }