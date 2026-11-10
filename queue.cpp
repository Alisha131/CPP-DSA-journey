#include<iostream>
#include<deque>
using namespace std;


class node{
public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }

};
class queue {
    node* head;
    node* tail;

public:
    queue(){
        head = tail = NULL;
    }

    void push(int data){ //insr data at tail of LL
        node* newnode = new node(data);
        if(empty()){
            head = tail = newnode;

        } else{
            tail->next = newnode;
            tail = newnode;
        }
    }
    void pop(){  //0(1)
        if(empty()){
            cout<<"LL is empty"<<endl;
            return;
        }
        node* temp =  head;
        head  = head->next;
        delete temp;


    }
    int front(){  //0(1)
        if(empty()){
            cout<<"LL is empty"<<endl;
            return -1;
        }
        return head->data;
    }
    bool empty(){  //0(1)
         return  head == NULL;
    }
};
int main(){
queue Q;

Q.push(1);
Q.push(2);
Q.push(3);
Q.push(4);

while(!Q.empty()) {
    cout<<Q.front()<<" ";
    Q.pop();
}
    cout<<endl;

    deque<int> dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);

    dq.push_front(4); //4, 1, 2, 3

    cout<< dq.front()<<" "<<dq.back()<<endl;

    dq.pop_back();  //4, 1, 2

    return 0;
}