#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main() {
//all possibles array 
int n = 7;
int arr[] = {3, -4, 5, 4, -1, 7, -8};
int maxsum = INT_MIN;


for(int st = 0;  st<n; st++) {
    int currsum = 0;
    for(int end = st; end<n; end++) {
         currsum += arr[end];
         maxsum = max(currsum, maxsum);

    }
}
 cout << "maximum subarray sum is = " << maxsum << endl;

// for(int st=0; st<n; st++){
//     for(int end=st; end<n; end++){
//         for(int i=st; i<=end; i++){
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }
// }
    return 0;
}