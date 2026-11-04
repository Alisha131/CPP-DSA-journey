#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
//character arrays
char str[] = {'a', 'b', 'c', '\0'};
char str1[] = "hello"; //string literals
char str2[9];

cout<< str << endl;  

cout<< str1 << endl;  

cout<< str2[12] << endl;

cout<<"enter character array :";
cin.getline(str2, 12, '$');

for(char ch : str2){
 
    cout<<ch<<" ";
}
cout<<endl;

//strings in cpp
string Str = "alisha";
cout<<Str<<endl;

string name = "alisha zakir";

for(int i=0; i<name.length(); i++){
    cout<<name[i]<<" ";
}

//reverse a string
string fullname = "alishaa";
reverse(fullname.begin(), fullname.end());
cout<<"reverse string: "<<fullname<<endl;








return 0;
}