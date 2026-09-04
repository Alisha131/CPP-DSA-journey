#include<iostream>
#include<string>
using namespace std;

class teacher {
    //properties //attributes
   private:
   double salary;

    public:
    string name;
    string dept;
    string subjects;
    teacher(){   //creating our own constructor- non-parameterized
      dept = "computer science";
    }

    teacher(string n, string d, string s){  //parameterized  
      name = n;
      dept = d;
      subjects = s;
      
    }

  
  


//methods or member functions- its like a function which is written in class

  void changeDept(string newDept){ 
      dept = newDept;
  }

  //setter
   void setSalary(double s) {
       salary = s;
   }
//getter
   double getSalary() {
      return salary;
   }
};

class person {
  public:
  string name;
  int age;

  person(string name, int age) {
    this->name = name;
    this->age = age;
  }
};

class student: public person{   //inheritance
  //name, age, roll no.
   int rollno;

   void getInfo(){

   }

};
  string name;
  int roll_no;

int main(){
//objects for teachers
teacher t1;  //constructor call
t1.name = "alisha";
t1.dept = "computer science";
t1.subjects = "c++";
t1.setSalary(25000);

cout<< t1.name << endl;
cout<< t1.dept << endl;
cout<< t1.subjects << endl;
cout<< t1.getSalary() << endl;
    return 0;
}
