#include<iostream>
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

class circularlist{
      node* head;
      node* tail;
public:
    circularlist(){
        head = tail = NULL;
    }

    int insertathead(int val){
        node* newnode = new node(val);
        if(head==NULL){
            head = tail = newnode;
            tail->next = head;
        } else{
            newnode->next = head;
            head = newnode;
            tail->next = head;
        }
    }
        int insertattail(int val){
        node* newnode = new node(val);
        if(head==NULL){
            head = tail = newnode;
            tail->next = head;
        } else{
            newnode->next = head;
            tail->next = newnode;
            tail = newnode;
        }

    }
    void deleteathead(){

        if(head==NULL) return;
        else if(head==tail){
            delete head;
            head = tail = NULL;
        } else{
            node* temp = head;
            head = head->next;
            tail->next = head;
            temp->next = NULL;
            delete temp;
        }
    }
void deleteattail(){

        if(head==NULL) return;
        else if(head==tail){
            delete head;
            head = tail = NULL;
        } else{
            node* temp = tail;
            node*  prev = head;
            while(prev->next!=tail){
                prev = prev->next;
            }
            tail = prev;
            tail->next = head;

            temp->next = NULL;
            delete temp;
        }
    }

    void print(){
        if(head==NULL) return;
            cout<<head->data<<"->";
            node* temp = head->next;

            while(temp!=head){
                cout<<temp->data<<"->";
                temp = temp->next;
            }
            cout<<"NULL\n";
        }

};


int main(){
   circularlist cll;
   cll.insertathead(1);
   cll.insertathead(2);
   cll.insertathead(3);
   cll.insertathead(4);
   cll.insertathead(5);
   cll.insertattail(6);
   cll.deleteathead();
   cll.deleteattail();
   cll.print();
    return 0;
}