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


    void aTm(int val,int i){ //add to middle
        Node* newnode=new Node(val);
        Node* temp=head;
        int count=0;
        if(i==0){          //add to head; (this) and
            pushFront(val);
            return;
        }
        if(head==NULL){ // add to head (this) both are solve by using pushFront.
            head=newnode;
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
 void rFm(int j){  //remove from middle
    Node* temp=head;
    int count=0;
    // if(head==NULL){//empty
    //     cout<<"list is empty";
    //     return -1;
    // }
    if(j==0||head==NULL){ //remove from head or empty
       popFront();
        return;
    }
    while((temp->next)->next!=NULL && count!=(j-1)){   // itrate at i-1
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




    void display(){
        Node* temp=head;
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


};

int main(){
    LL q;
    // q.pushFront(1);
    // q.pushFront(2);
    // q.pushFront(3);
    // q.pushBack(4);
    // // q.popFront();
    // // q.popback();
    // // q.popback();
    // q.aTm(5,2);
    q.rFm(4);
    q.display();
   


return 0;
}