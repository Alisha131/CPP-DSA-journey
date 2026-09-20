#include<iostream>
using namespace std;
int diagonalSum(int mat[][4], int n){

    int sum = 0;
    
    //primary diagonal => i = j
    //secondary diagonal => j = n - 1 - i

    for(int i = 0; i<n; i++) {
        for(int j = 0; j<n; j++){
            if(i==j){
                sum += mat[i][j];
            }
            else
             if(j == n-1-i){
                sum += mat[i][j];
             }
        }
    }
return sum;
}

int main(){
int mat[4][4]={{1, 2, 3, 9}, {4, 5, 6, 8}, {7, 8, 9, 8}, {10, 11, 12, 13}};
int n = 4;

cout<<diagonalSum(mat, n)<<endl;

    return 0;
}