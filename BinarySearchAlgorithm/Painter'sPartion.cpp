#include<iostream>             // //O(logN * n)
#include<vector>
using namespace std;

bool isValid(vector<int> &arr,int n,int m,int maxAllowedPages){  //maxAllowedPages is same as mid,mid=maxAllowedPages
    int painter=1,time=0;
    for(int i=0;i<n;i++){
       if(arr[i]>maxAllowedPages){
        return false;
       }
       if(time + arr[i] <= maxAllowedPages){
         time +=arr[i];
       }else{
         painter++;
         time=arr[i];  
       }
    }  
    return painter > m ? false : true;
    }
int minTimeToPaint(vector<int> &arr,int m,int n){
    if(m > n){
        return -1;
    }
    int sum=0,maxVal=INT8_MIN;
    for(int i=0;i<n;i++){
        sum += arr[i];
        maxVal=max(maxVal,arr[i]);
    }
    int ans=-1;
    int st=maxVal,end=sum;
    
    while(st <= end){
        int mid=st + (end-st) / 2;
        if(isValid(arr,n,m,mid)){ //left
            end=mid - 1;
            ans=mid; 
        }
        else{
            st=mid + 1;  
        }
    }
    return ans;
}

int main(){
    
    vector<int> arr={40,30,10,20};
    int m=2,n=4;

    cout<<minTimeToPaint(arr,m,n)<<endl;
    return 0;
}


