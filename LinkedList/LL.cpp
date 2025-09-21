//[]->[]->[]->[]       {->=next pointer,[]=node} singly linked list....
#include<iostream>
using namespace std;


class Node{
    public:
   int data;
   Node* next;

   Node(int el){
    data=el;
    next=NULL;
   }

};
class LL{
    Node* head;
    Node* tail;

    public:
    LL(){
        head=NULL;
        
    }

    void pushFront(int val){
        Node* newnode=new Node(val);
        if(head==NULL){
            head=newnode;
            return;
            
        }else{
            newnode->next=head;
            head=newnode;
            return;
        }

    }
    void pushBack(int val){
        Node* newnode=new Node(val);
        Node* temp=head;
        if(head==NULL){
            head=newnode;

        }while(temp->next!=NULL){
            temp=temp->next;
        }
       
        temp->next=newnode;
        newnode->next=NULL;

    }

    void popFront(){
        if(head==NULL){
            cout<<"linked list is empty\n";
            return;
        }
        Node* temp=head;
       head=head->next;
       temp->next=NULL;
       delete temp;

       return;
        

    }


    void popback(){
        Node *temp=head;
        if(head==NULL){
            cout<<"linked list is empty\n";
            return;
        }
        else if(head->next==NULL){  //single node
            delete head;
            head=NULL;
        }

        while(temp->next->next!=NULL){  //temp->next->next!=NULL  (without tail)
            temp=temp->next;
        }
        delete temp->next;
        temp->next=NULL;
    }




    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<"["<<temp->data<<"]"<<"->";
            temp=temp->next;
        }
        cout<<"Null";
    }


};

int main(){
    LL q;
    q.pushFront(1);
    q.pushFront(2);
    q.pushFront(3);
    q.pushBack(4);
    q.popFront();
    q.popback();
    q.popback();
    q.display();
   


return 0;
}