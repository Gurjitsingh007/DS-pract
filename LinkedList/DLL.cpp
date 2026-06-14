#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int el){
        data=el;
        next=NULL;
        prev=NULL;
    }

};

class DLL{
    Node* head;
    Node* tail;

    public:

    DLL(){
        head=NULL;
        tail=NULL;

    }

    void pushFront(int val){
        Node* newnode = new Node(val);
        if(head==NULL && tail==NULL){
            head=tail=newnode;
            return;

        }
        head->prev=newnode;
        newnode->next=head;
        head=newnode;
        
    }

    void pushBack(int val){
        Node* newnode= new Node(val);
        if(head==NULL && tail==NULL){
            head=tail=newnode;

        }
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
    }

    int popFront(){
        Node* temp=head;
        int D=temp->data;
        if(head==tail && head!=NULL){ //wingle node
            
            delete temp;
            return D;
        }
        else if(head==NULL){
            cout<<"list is empty";
            return -1;
        }

        head=head->next;
        head->prev=NULL;
        temp->next=NULL;

        delete temp;
        return D;
        }

        int popBack(){
            Node* temp=tail;
            int D=temp->data;
            if(head==NULL){ //empty
                cout<<"LIST IS EMPTY";
                return -1;

            }

            if(head==tail && head!=NULL){//single node
                delete temp;
                return D; 

            }
            tail=tail->prev;
            tail->next=NULL;
            temp->prev=NULL;

            delete temp;
            return D;


        }







    void display(){
        Node* temp=head;
        if(head==NULL && tail==NULL){
            cout<<"list is empty";
            return;
        }
        while(temp!=NULL){
           
            cout<<"["<<temp->data<<"]"<<"<->";
            temp=temp->next;            
        }cout<<"NULL";
         
    }


};

int main(){
    DLL d;


    d.pushBack(5);
    d.pushBack(6);
    d.pushFront(1);
    d.pushFront(7);
    d.popFront();
    d.popBack();
    d.display();


return 0;
}