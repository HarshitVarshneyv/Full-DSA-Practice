// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void permutation(string &str, int idx, vector<string> &ans)
{
    if (idx == str.size())
    {
        ans.push_back({str});
        return;
    }
    for (int i = idx; i < str.size(); i++)
    {
        swap(str[idx], str[i]);
        permutation(str, idx + 1, ans);
        swap(str[idx], str[i]);
    }
}

bool prime(string &strNum)
{
    int num = stoi(strNum);
    if (num < 2)
    {
        return false;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    vector<string> ans;
    string str = "190";
    permutation(str, 0, ans);

    for (auto perm : ans)
    {
        if (prime(perm))
        {
            cout << perm << endl;
        }
    }
    return 0;
}

// For unique values you should use the set
/*
#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool prime(const string &strNum){
    int num = stoi(strNum);
    if(num < 2){
        return false;
    }
    for(int i=2;i*i <= num ;i++){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}


void permute(string &str,int idx,vector<string> &ans){
     if(idx == str.size()){
           ans.push_back(str);
           return;
        }

        for(int i=idx;i < str.size();i++){
            swap(str[idx],str[i]);
            permute(str,idx+1,ans);
            swap(str[idx],str[i]);
        }
     }

int main(){
    vector<string> ans;
    int n=10;
    string str = to_string(n);
    permute(str,0,ans);

    bool found_prime = false;
    for(auto val : ans){
        if(prime(val)){
            cout <<  val << endl;
            found_prime = true;
        }
    }
    if(!found_prime){
        cout << "0 ";
    }
    return 0;
}
*/