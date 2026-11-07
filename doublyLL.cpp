#include<iostream>
using namespace std;

class node{
    public:
         int data;
         node* next;
         node* prev;

         node(int val){
            data = val;
            next = prev = NULL;
         }
};

class doublylist{
    node* head;
    node* tail;

public:
      doublylist(){
        head = tail = NULL;
      }

      void push_front(int val){

        node* newnode = new node(val);
        if(head = NULL){
            head = tail = newnode;
        }else{

            newnode->next = head;
            head->prev = newnode;
            head = newnode;

        }

        
        }

        void push_back(int val){
            node* newnode = new node(val);
            if(head = NULL){
            head = tail = newnode;
        }else{

            newnode->prev = tail;
            tail->prev = newnode;
            tail = newnode;
        }
        }
        void print(){
            node* temp = head;
            while(temp!=NULL){
                cout<<temp->data<<"<=>";
                temp = temp->next;
            }
            cout<<"NULL";
        }
};


int main(){
    doublylist dll;
    dll.push_front(1);
    dll.push_front(2);
    dll.push_front(3);
    dll.push_front(4);
    dll.push_back(5);
    
    dll.print();


    return 0;
}