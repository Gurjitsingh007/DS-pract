#include<iostream>
using namespace std;

template<class X>
class Node{
    public:
    X data;
    Node* next;
    Node* prev;
    Node( X val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};

template<class X>
class DLL_ADT{
    public:
    Node<X>* head;
    Node<X>* tail;
    DLL_ADT(){
        head=NULL;
        tail=NULL;
    }
    void pushFront(X ele);
    void pushBack( X ele);

    int popFront();
    int popBack(); 
    void display();


    


};
template<class X>
 void DLL_ADT<X>:: pushFront(X val){
        Node<X>* newnode = new Node<X>(val);
        if(head==NULL && tail==NULL){
            head=tail=newnode;
            return;

        }
        head->prev=newnode;
        newnode->next=head;
        head=newnode;
        
    }

template<class X>
void DLL_ADT<X>:: pushBack(X val){
    Node<X>* newnode = new Node<X>(val);
     if(head==NULL && tail==NULL){ //empty
            head=tail=newnode;
            return;

        }
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;





}

template<class X>
int DLL_ADT<X>::popFront(){
        Node<X> *temp=head;
        int D=temp->data;
        if(head==tail && head!=NULL){ //single node
            
            delete temp;
            return D;
        }
        else if(head==NULL){
            cout<<"list is empty";
            return -999;
        }

        head=head->next;
        head->prev=NULL;
        temp->next=NULL;

        delete temp;
        return D;
        

}

template<class X>
int DLL_ADT<X>:: popBack(){
    Node<X>* temp=tail;
    int D=temp->data;

    if(head==tail && head!=NULL){ //single node
            
            delete temp;
            return D;
        }
    else if(head==NULL){
           // cout<<"list is empty"; 
            return -999;
        }

        tail=tail->prev;
        tail->next=NULL;
        temp->prev=NULL;

        delete temp;

        return D;




}
template<class X>
void DLL_ADT<X>:: display(){
        Node<X>*temp=head;
        if(head==NULL){
            cout<<"list is empty";
            return;
        }
        while(temp!=NULL){
            cout<<"["<<temp->data<<"]"<<"->";
            temp=temp->next;
        }
        cout<<"Null";
    }


