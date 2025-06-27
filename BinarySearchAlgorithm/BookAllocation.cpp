#include<iostream>
#include<vector>               //O(logN * n)
using namespace std;

bool isValid(vector<int> &arr,int n,int m,int maxAllowedPages){  //maxAllowedPages is same as mid,mid=maxAllowedPages
    int student=1,pages=0;
    for(int i=0;i<n;i++){
       if(arr[i]>maxAllowedPages){
        return false;
       }
       if(pages + arr[i] <= maxAllowedPages){
         pages +=arr[i];
       }else{
         student++;
         pages=arr[i];  
       }
    }

    return student > m ? false : true;
}


int bookAllocate(vector<int> &arr,int n,int m){
    if(m > n){    //student > books   5>3
        return -1;
    }
    int sum=0,maxVal=INT16_MIN;
    for(int i=0;i<n;i++){
        sum +=arr[i];
        maxVal=max(maxVal,arr[i]);
    }
    // sum=n*(n+1)/2 //we can directly calculate this with the help of formula.

    int ans=-1;
    int st=maxVal,end=sum; //range of possible ans

    while(st<=end){
    int mid=st + (end-st) / 2;
    if(isValid(arr,n,m,mid)){ //left
         ans=mid;
         end=mid-1;
    }
    else{  //right
         st=mid+1;
    }
}
return ans;
}

int main(){
     
    vector<int> arr={2,1,3,4};
    int n=4,m=2;  //m=no. of student //n=no. of books

    cout<< bookAllocate(arr,n,m) <<endl;
    return 0;
}