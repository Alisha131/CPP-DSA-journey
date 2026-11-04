#include<iostream>
#include<vector>
using namespace std;

void printnum(int n){
if(n==1){
    cout<<"1\n";
    return;
}
    cout<<n<<" ";
    printnum(n-1);
}

int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}
int sum(int n){
    if(n==1){
        return 1;
    }
    return n+fact(n-1);
}

int fibonacci(int n){
    if(n==0 || n==1){
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}

//backtracking
void printsubsets(vector<int> &arr, vector<int> &ans, int i){
    if(i==arr.size()){
        for(int val : ans){
            cout<<val<<" ";
        }
        cout<<endl;
        return;
    }
    //include
    ans.push_back(arr[i]);
    printsubsets(arr, ans, i+1);

    ans.pop_back();  ///backtracking
    //exclude
    printsubsets(arr, ans, i+1);
}

int main(){
    printnum(10);
    cout << fact(5)<<endl;
    cout<<sum(4)<<endl;
    cout<<fibonacci(4)<<endl;

    vector<int> arr = {1, 2, 3};
    vector<int>  ans;  //store subsets
    
    printsubsets(arr, ans, 0);


    return 0;
}