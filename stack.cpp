#include<iostream>
#include<vector>
#include<list>

using namespace std;
//stack implementation usin vector
class stack{
   vector<int> v;

public:

    void push(int val){  //0(1)
        v.push_back(val);
    }
    void pop(){  //0(1)
       v.pop_back();

    }
    int top(){  //0(1)
        return v[v.size()-1];
    }
    bool empty(){
        return v.size() == 0;
    }

};
//stack implementation using linked list
class stack2{
   list<int> ll;

public:

    void push(int val){  //0(1)
        ll.push_front(val);
    }
    void pop(){  //0(1)
       ll.pop_front();
    }
    int top(){  //0(1)
        return ll.front();
    }
    bool empty(){
        return ll.size() == 0;
    }

};





int main(){
   stack s;   

   s.push(10);
   s.push(20);
   s.push(30);

   while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
   }

   cout<<endl;

   stack s1;  

   s1.push(10);
   s1.push(20);
   s1.push(30);

   while(!s1.empty()){
    cout<<s1.top()<<" ";
    s1.pop();
   }

   cout<<endl;


    return 0;
}