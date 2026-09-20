#include<iostream>
#include<math.h>
using namespace std;

//linear search algorithm in 2D arrays
    
bool linearsearch(int mat[][3], int r, int c, int key){
        for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            if(mat[i][j]==key){
                return true;
            }
        }
        
    }
       return false;
}


int main() {

    //int matrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int matrix[4][3];
    int rows = 4;
    int col = 3;

   // matrix[2][1] = 18; update the elements
    //cout<<matrix[2][1]<<endl; print any elememt of matrix

    //loops on 2D matrix

    //input

    for(int i = 0; i<rows; i++){
        for(int j = 0; j<col; j++){
        
            cin>>matrix[i][j];
        }
        
    }

    //output

    for(int i = 0; i<rows; i++){
        for(int j = 0; j<col; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }


   //linear search
int mat[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
int r = 3;
int c = 3;
cout<< linearsearch(mat, r, c, 7) << endl; //func call




    return 0;
}
    

    
