#include <iostream>
#include <limits.h>
using namespace std;

int linearsearch(int arr[], int sz, int target) {        //linear search 1st algorithm
 for(int i=0; i<sz; i++ ) {
    if(arr[i] == target) {
      
      return arr[i];
    }
 }
  return -1;
}
int main() {


//int size = 5;
///int marks[size];
//for(int i = 0; i<size; i++) {
    //cout << "enter the element " << i+1;
//cin >> marks[i];
//}
//int marks[5] = {99, 199, 89, 68};
//double price[] = {98.9, 99.9, 89.9};
//marks[0] = 101;
//cout << marks[0] << endl;
//cout << marks[1] << endl;
//cout << marks[2] << endl;
//cout << marks[3] << endl;
//cout << sizeof(marks) << endl;


// int num[] = {2, 6, -6, 8, 9, 10};
// int size = 6;
// int smallest = INT_MAX;
// for(int i=0; i<size; i++) {
//   if(num[i]<smallest) {
//     smallest = num[i];
//   }
// }
// cout << "smallest = " << smallest << endl;


//for(int i=0; i<size; i++) {   //array in loops
    //cout << marks[i] << endl;
// }

int arr[] = {4, 2, 7, 8, 1, 2, 5};
int sz = 7;
int target = 5;

cout << linearsearch(arr, sz, target) << endl;

return 0;
}