#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main() {
    vector<int> arr = {3, 4, 3, 2, 3, 4, 3, 3};
    unordered_map<int, int> m;

    for (int val : arr) {
        m[val]++;
    }

    bool flag = false;
    for (auto val : m) {
        if (val.second > arr.size() / 2) {
            cout << val.first;  // Print the majority element
            flag = true;
            break;
        }
    }

    if (!flag) {
        cout << "No majority element";
    }

    return 0;
}
