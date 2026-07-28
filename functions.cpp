#include <iostream>
using namespace std;

//function definition
void printHello() {
    cout<<"hello\n";
}
int sum(int a, int b){ //sum of two no.
    int s = a + b;

    return s;
}
int minOftwo(int a, int b) {  //minimum of two no. , int a and int b are called parameters
  if(a<b) {
    return a;
  } else {
    return b;
  }
}


int main() {
    //function call / invoke
    printHello();
    printHello();
    printHello();

    cout<<"sum = " << sum(10, 5) << endl;
    cout <<"min of two = " << minOftwo(19, 20);  // 19, 20 are called arguments
    
    return 0;
}
