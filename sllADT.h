#include<iostream>
using namespace std;

template<class X>
class Node{
    public:
    X data;
    Node* next;
    Node( X val){
        data=val;
        next=NULL;
    }
};

template<class X>
class SLL_ADT{
    Node* head;
    Node* tail;

    SLL_ADT(){
        head=NULL;
        tail=NULL;
    }
    
    void addToHead(X ele);  //(i) insert x at begining of the singly linked list;
    void insert(X ele,int i); //(ii) insert x at i possition
    void remove (int i); //(iv) remove from ith position
    int search(X ele); //(v) search element and return index;

};
template<class X>
void SLL_ADT<X>::addToHead(X ele){
    Node* newnode=new Node(ele);

    if(head==NULL){ //empty
        head=newnode;
        tail=newnode;

        return;

    }
    newnode->next=head;
    head=newnode;
    return;
}

template<class X>
void SLL_ADT<X>::insert(X ele,int i){
    Node* newnode=new Node(ele);
    Node* temp=head;

 int count=0;
        if(head==NULL || i==0){          //add to head;
            addToHead(ele);
            return;
        
        }
        while(temp->next!=NULL && count!=(i-1)){  //temp is at i-1 index
            temp=temp->next;
            count++;
        }
        if(temp->next==NULL){ //if user enter last index
            temp->next=newnode;
            return;

        }
        newnode->next=temp->next;
        temp->next=newnode;


}

template<class X>
void SLL_ADT<X>::remove(int i){
    Node* temp=head;
    int count=0;
    if(j==0||head==NULL){ //remove from head or empty
        Node* temp=head;
        if(head==NULL){
            cout<<"linked list is empty\n";
            return;
        }
        
       head=head->next;
       temp->next=NULL;
       delete temp;

        return;
    }
    while((temp->next)->next!=NULL && count!=(j-1)){   // remove from mid....
        temp=temp->next;
        count++;
    }
    if((temp->next)->next==NULL){ //tail
        delete temp->next;
        temp->next=NULL;
        return;
    }
    Node *x=temp->next;
    temp->next=(temp->next)->next;
    x->next=NULL;
    
    delete x;

}


template<class X>
int SLL_ADT<X>::search(X ele){
    int count=0;

    if(head==NULL){
        cout<<"linked list is empty";
        return -1;
    }
    while(temp!=NULL){
        if(temp->data==ele){
            return i;
        }
        temp=temp->next;



    }return -1;



}

