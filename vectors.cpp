#include <iostream>
#include <vector>
using namespace std;

int main() {
   //vector<int> vec = {1, 2, 3};
//    vector<int> vec ( 3, 0 );
//    cout << vec[0];
vector<char> vec = {'a', 'b', 'c', 'd'};   

cout << "size : " << vec.size() << endl;  //size
cout << "capacity of vector : " << vec.capacity() << endl;  //capacity

vec.push_back('e');     
vec.push_back('f'); 
vec.push_back('g');                  //push - to add elements in vector
cout << "after push back size = " << vec.size() << endl;
cout << "size : " << vec.size() << endl;  //size
cout << "capacity of vector : " << vec.capacity() << endl;


vec.pop_back();


for(char i : vec)  {   // for each loop for vector
    cout << i << endl;

    //cout << vec.at[2] << endl;
   //cout << vec.front() << endl;
    //cout << vec.back() << endl;
}

return 0;
}