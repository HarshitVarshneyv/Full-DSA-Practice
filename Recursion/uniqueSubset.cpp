#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void printSubset(vector<int> &arr , int idx ,vector<int> &ans,vector<vector<int>> &allSubset){
    int n = arr.size();
    if(idx == n){
        allSubset.push_back(ans);
        return;
    }
    
    ans.push_back(arr[idx]);
    printSubset(arr,idx + 1,ans,allSubset);
    ans.pop_back();
    while(idx+1 < n && arr[idx] == arr[idx+1]){
        idx++;
    }
    printSubset(arr,idx+1,ans,allSubset);
}

int main(){
    vector<vector<int>> allSubset;
    vector<int> ans;
    vector<int> arr = {1,2,3,3,2};
    sort(arr.begin(),arr.end());
    printSubset(arr,0,ans,allSubset);

    for(auto& subset : allSubset){
        for(int num : subset){
            cout<< num ;
        }
        cout << endl;
    }

    return 0;
}
