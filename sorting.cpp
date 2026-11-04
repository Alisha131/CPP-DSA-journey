#include<iostream>
using namespace std;

//bubble sort
void bubblesort(int arr[], int n){
    bool isSwap = false;
    for(int i = 0;  i<n-1; i++){
        for(int j = 0; j<n-i-1; j++){

            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
        if(!isSwap){  //array is already  sorted
            return;
        }
    }
}
void selectionsort(int arr[], int n){
    
    for(int i = 0;  i<n-1; i++){
        int smallestIdx = i;  //iunsorted part starting
        for(int j = i+1; j<n; j++){

            if(arr[j]<arr[smallestIdx]){
                smallestIdx = j;
            }
        }
        swap(arr[i], arr[smallestIdx]);
    }
}

// void insertionsort(int arr[], int n){
    
//     for(int i = 1;  i<n; i++){
        
// }
void printarray(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){

    int  n = 5;
    int arr[] = {4, 1, 2, 5,  3};
    
    //bubblesort(arr, n);
    selectionsort(arr, n);
    printarray(arr,n);
    
    return 0;
}