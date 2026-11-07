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