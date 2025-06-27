// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int main() {
    vector<string> ans = {"Monday","Tuesday","Wednesday","Thursday","Friday",
                         "Saturday","Sunday"};
    int n;
    cin >> n;
    vector<string> arr(n);
    for(int i = 0;i < n;i++){
        cin >> arr[i] ;
    }
    for(string val : ans){
        for(int i=0;i<n;i++){
            if(val == arr[i]){
                cout << val << "  ";
            }   
        }
    }
    return 0;
}

/*
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    // Days of the week
    vector<string> ans = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", 
                          "Saturday", "Sunday"};
    
    int n;
    cin >> n; // Number of user-input days
    
    unordered_set<string> inputDays; // For O(1) lookups
    for (int i = 0; i < n; i++) {
        string day;
        cin >> day;
        inputDays.insert(day); // Store user input in set
    }

    // Check and print matching days
    for (const string& val : ans) {
        if (inputDays.count(val)) { // O(1) lookup
            cout << val << "  ";
        }
    }

    return 0;
}

*/