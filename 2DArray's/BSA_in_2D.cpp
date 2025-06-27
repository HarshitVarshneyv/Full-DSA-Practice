//Search in a sorted 2D matrix
//LINEAR SEARCH =>

// #include<iostream>
// using namespace std;

// bool linearSearch(int mat[][3],int row,int col,int t){

//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             if(mat[i][j] == t){
//               return true;
//             }
//         }
//     }
//     return false;
// }
// int main(){
     
//     int mat[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
//     int row=4,col=3;
//     int t=155;
//     cout<<linearSearch(mat ,row ,col ,t)<< endl;
//     return 0;
// }


// 2 => You can directly apply the binary search;
 

//3=> If we flatten the given 2D matrix to a 1D array, the 1D array will also be sorted. By utilizing binary 
//search on this sorted 1D array to locate the 'target' element, we can further decrease the time complexity.

// We will use the following formula:
// If index = i, and no. of columns in the matrix = m, the index i corresponds to the cell with
// row = i / m and col = i % m. More formally, the cell is (i / m, i % m)(0-based indexing).





#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int n = matrix.size();
    int m = matrix[0].size();

    //apply binary search:
    int low = 0, high = n * m - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        int row = mid / m, col = mid % m;
        if (matrix[row][col] == target) return true;
        else if (matrix[row][col] < target) low = mid + 1;
        else high = mid - 1;
    }
    return false;
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    searchMatrix(matrix, 8) == true ? cout << "true\n" : cout << "false\n";
}



