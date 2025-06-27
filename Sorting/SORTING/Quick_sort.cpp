#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int> &arr , int st , int end){
      int idx = st-1 , pivot = arr[end];
      for(int j=st;j<end;j++){
        if(arr[j] <= pivot){
            idx++;
            swap(arr[j], arr[idx]);
        }
      }
      //To ensure pivot comes to be in a best place
      idx++;
      swap(arr[end], arr[idx]);
      return idx;
}

void quickSort(vector<int> &arr , int st , int end){
    if(st < end){  //Because in this case only single element will be left 
        int pivIdx = partition( arr , st ,end); // First = > 2 1 [3] 5 6 4 

        //Left half
        quickSort(arr,st,pivIdx-1);  //Left half start ho rha h st se aur end pivIdx-1..
        //Righrt half
        quickSort(arr,pivIdx+1,end);
    }
}
int main(){
    vector<int> arr = {5,2,6,4,1,3};
    quickSort(arr,0,arr.size()-1);
    for(int val : arr){
        cout<< val << " ";
    }
    return 0;
}
