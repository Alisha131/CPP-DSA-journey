#include<iostream>
using namespace std;
int main(){


int a = 10;

int* ptr = &a; //pointer

int** ptr2 = &ptr; //pointer to pointer

cout<<&a<<endl;  //memory address of a
cout<< ptr <<endl; //pointer
cout<< &ptr <<endl;
cout<< ptr2 <<endl;
cout<< *(&a) <<endl; //derefrence -> value at address


float price = 100.25;
float* ptr3 = &price;

cout<< &price <<endl; //memory address of price
cout<< ptr3 <<endl; 
cout<< &ptr3 <<endl;


int* nulptr = NULL; //null pointer, dereference is not possible

cout<<nulptr<<endl;

    return 0;
}