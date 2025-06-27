
//     [Naive Approach] Row-wise traversal – O(M*N) Time and O(1) Space: => Does not depend upon sorted array
/*
#include<iostream>
#include<vector>
using namespace std;

int rowWithMax1s(vector<vector<int>>& matrix){
    int m = matrix.size();
    int n = matrix[0].size();
    int maxCount = 0;
    int rowIdx = -1;

    for(int i=0;i<m;i++){
        int count = 0;
         for(int j=0;j<n;j++){
            if(matrix[i][j] == 1){
                count++;
            }
         }
        if(count > maxCount){
            rowIdx = i;
            maxCount = count;
        }
    }
    return rowIdx;
}

int main(){
vector<vector<int>> matrix = 
{  {0 ,1 ,1 ,1},
    {0 ,0 ,1 ,1},
    {1 ,1 ,1 ,1 },
    {0 ,0 ,0 ,0 } };

    cout << rowWithMax1s(matrix);
    return 0;
} */

// [Better Approach] Using Binary Search – O(M * logN) Time O(1) Space:  only work on the sorted array

// #include<iostream>
// #include<vector>
// using namespace std;

// int firstOneIndex(const vector<int>& row){
//     int st = 0, end = row.size()-1      ;
//     int idx = row.size();
//     //You're initializing idx = 0, which is wrong if there is no 1 in the row. 
//     //It should be initialized to row.size() to avoid miscounting.

//     while(st <= end){
//        int mid = st + (end -st) / 2;
//        if(row[mid] == 1){
//           end = mid-1;
//           idx = mid;
//        } else{
//         st = mid+1;
//        }
//     }
//     return idx;
// }

// int rowWithMax1s(const vector<vector<int>>& matrix){
//     int m = matrix.size();
//     int maxCount1 = 0;
//     int maxRow = -1;

//     for(int i=0;i<m;i++){
//       int idx = firstOneIndex(matrix[i]);
//       int rowcount1 = matrix[i].size() - idx;

//       if(rowcount1 > maxCount1){
//         maxCount1 = rowcount1;
//         maxRow = i;
//       }
//    }
//    return maxRow;
// } 
// int main(){
//      vector<vector<int>> matrix = {
//         {0, 0, 0, 1},
//         {0, 1, 1, 1},
//         {0, 0, 1, 1},
//         {0, 0, 0, 0}
//     };

//         cout << rowWithMax1s(matrix);
//         return 0;
//     }   

//[Expected Approach] Traversal from top-right to outside the grid – O(M + N) Time and O(1) Space:


#include<iostream>
#include<vector>
using namespace std;
    
int rowWithMax1s(const vector<vector<int>>& matrix){
    int m = matrix.size();
    int n =matrix[0].size();
    int rowIdx =-1;
    int R = 0 ,C = n-1;

    while(R < m && C >= 0){
        if(matrix[R][C] == 1){
            rowIdx = R;
            C--;
        } else{
            R++;
        }
    }
    return rowIdx;
}

int main(){
        vector<vector<int>> matrix = {
           {0, 0, 0, 1},
           {0, 1, 1, 1},
           {0, 0, 1, 1},
           {0, 0, 0, 0}
       };
   
           cout << rowWithMax1s(matrix);
           return 0;
       }   