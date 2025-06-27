// #include<iostream>
// using namespace std;

// int maxSum(int mat[][3],int row,int col){
//     int maxSum=INT16_MIN;
//      for(int i=0;i<row;i++){
//         int currSum=0;
//         for(int j=0;j<col;j++){
//             currSum +=mat[i][j];
//             }
//             maxSum=max(maxSum,currSum);
//         }
//         return maxSum;
//     }

// int main(){

//     int mat[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
//     int row=4,col=3;
//     cout<<maxSum(mat,row,col)<<endl;
//     return 0;
// }


// Max column sum

#include<iostream>
using namespace std;

int maxSum(int mat[][3],int row,int col){
    int maxSum=INT16_MIN;
     for(int i=0;i<col;i++){
        int currSum=0;
        for(int j=0;j<row;j++){
            currSum +=mat[j][i];
            }
            maxSum=max(maxSum,currSum);
        }
        return maxSum;
    }

int main(){

    int mat[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int row=4,col=3;
    cout<<maxSum(mat,row,col)<<endl;
    return 0;
}